#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(bit_parity_ecc_d59_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint8_t g[4][4] = {{1,1,0,0},{0,0,1,1},{1,0,1,0},{0,1,0,1}};
    uint8_t rp[4], cp[4]; grid_compute_par(g, rp, cp);
    assert(grid_correct_bit(g, rp, cp) == 0);
    return 0;
}
