#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint8_t bg[4][4] = {{1,0,1,0},{0,1,0,1},{1,1,0,0},{0,0,1,1}};
    uint8_t brp[4], bcp[4]; grid_compute_par(bg, brp, bcp);
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += (uint64_t)(grid_correct_bit(bg, brp, bcp) == 0);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("bit_parity_ecc_d59 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
