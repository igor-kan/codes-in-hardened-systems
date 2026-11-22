#include "interface.h"
#include <math.h>
#include <string.h>

void rz32_init(rz_buf32_t *r) {
    r->head_guard = 0xDEADC0DEBEEFF00DULL;
    for (int i = 0; i < 32; ++i) r->payload[i] = 0;
    r->tail_guard = 0xCAFEBABE12345678ULL;
}

int rz32_write(rz_buf32_t *r, size_t off, uint8_t val) {
    if (off >= 32) return -1;
    r->payload[off] = val;
    return 0;
}

int rz32_check(const rz_buf32_t *r) {
    return (r->head_guard == 0xDEADC0DEBEEFF00DULL && r->tail_guard == 0xCAFEBABE12345678ULL) ? 0 : -1;
}
