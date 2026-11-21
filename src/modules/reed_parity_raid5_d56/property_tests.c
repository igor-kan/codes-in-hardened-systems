#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(reed_parity_raid5_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint8_t orig[8] = {7, 13, 19, 23, 29, 31, 37, 41};
    uint8_t work[8];
    memcpy(work, orig, 8);
    uint8_t par[4];
    raid_compute_parity(work, 2, 4, par);
    work[0] = 0xFF; work[1] = 0xFF;
    raid_recover_erasure(work, par, 2, 4, 0);
    assert(memcmp(work, orig, 8) == 0);
    return 0;
}
