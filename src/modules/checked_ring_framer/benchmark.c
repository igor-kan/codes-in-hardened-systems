#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    const uint8_t p[16]={1,2,3}; uint8_t w[32]; size_t wl=0; framer_cfg_t cfg={128};
    timespec_get(&t0, TIME_UTC);
    volatile uint64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        frame_encode(cfg, p, 16, w, 32, &wl); sink += wl + w[4];
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("checked_ring_framer us=%.1f sink=%llu\n", us, (unsigned long long)sink);
    return 0;
}
