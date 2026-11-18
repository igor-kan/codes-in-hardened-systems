#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(journal_wal_torn_guard_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    wal_frame_t f;
    const uint8_t msg[4] = {1, 2, 3, 4};
    wal_seal_frame(&f, 99ULL, msg, 4);
    f.data[2] ^= 0x10U;
    assert(!wal_verify_frame(&f));
    return 0;
}
