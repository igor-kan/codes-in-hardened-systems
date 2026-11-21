#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint8_t b_drv[8] = {1,2,3,4, 5,6,7,8};
    uint8_t b_par[4];
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        raid_compute_parity(b_drv, 2, 4, b_par); sink += b_par[0];
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("reed_parity_raid5_d56 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
