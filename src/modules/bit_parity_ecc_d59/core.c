#include "interface.h"
#include <math.h>
#include <string.h>

void grid_compute_par(const uint8_t grid[4][4], uint8_t row_p[4], uint8_t col_p[4]) {
    for (int i = 0; i < 4; ++i) { row_p[i] = 0; col_p[i] = 0; }
    for (int r = 0; r < 4; ++r) {
        for (int c = 0; c < 4; ++c) {
            uint8_t bit = grid[r][c] & 1u;
            row_p[r] ^= bit;
            col_p[c] ^= bit;
        }
    }
}

int grid_correct_bit(uint8_t grid[4][4], const uint8_t row_p[4], const uint8_t col_p[4]) {
    uint8_t cr[4], cc[4];
    grid_compute_par(grid, cr, cc);
    int br = -1, bc = -1, rc = 0, cc_cnt = 0;
    for (int i = 0; i < 4; ++i) {
        if (cr[i] != row_p[i]) { br = i; ++rc; }
        if (cc[i] != col_p[i]) { bc = i; ++cc_cnt; }
    }
    if (rc == 0 && cc_cnt == 0) return 0;
    if (rc == 1 && cc_cnt == 1) { grid[br][bc] ^= 1u; return 1; }
    return -1;
}
