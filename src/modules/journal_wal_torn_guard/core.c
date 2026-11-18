#include "interface.h"
#include <math.h>
#include <string.h>

uint32_t wal_fletcher32(const uint8_t* data, size_t len) {
    uint32_t s1 = 0xffffU, s2 = 0xffffU;
    for (size_t i = 0; i < len; ++i) {
        s1 = (s1 + data[i]) % 65535U;
        s2 = (s2 + s1) % 65535U;
    }
    return (s2 << 16) | s1;
}
void wal_seal_frame(wal_frame_t* f, uint64_t lsn, const uint8_t* payload, uint32_t len) {
    memset(f, 0, sizeof(*f));
    f->magic = WAL_MAGIC;
    f->lsn = lsn;
    f->len = len <= 32U ? len : 32U;
    memcpy(f->data, payload, f->len);
    f->checksum = wal_fletcher32(f->data, f->len) ^ (uint32_t)lsn;
    f->trailer_lsn = lsn;
}
bool wal_verify_frame(const wal_frame_t* f) {
    if (f->magic != WAL_MAGIC || f->len > 32U || f->lsn != f->trailer_lsn) return false;
    uint32_t expected = wal_fletcher32(f->data, f->len) ^ (uint32_t)f->lsn;
    return f->checksum == expected;
}
