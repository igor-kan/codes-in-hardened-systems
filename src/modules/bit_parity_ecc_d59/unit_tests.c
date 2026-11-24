#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(bit_parity_ecc_d59_validate_len(1) == BIT_PARITY_ECC_D59_OK);
    uint8_t g[4][4] = {{1,0,1,1},{0,1,1,0},{1,1,0,0},{0,0,0,1}};
    uint8_t rp[4], cp[4];
    grid_compute_par(g, rp, cp);
    g[2][3] ^= 1u;
    assert(grid_correct_bit(g, rp, cp) == 1 && g[2][3] == 0);
    assert(bit_parity_ecc_d59_verify_guard(true) == BIT_PARITY_ECC_D59_OK);
    return 0;
}
