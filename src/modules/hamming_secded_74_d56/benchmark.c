#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint8_t b_out = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        uint8_t b_cw = hamming84_encode((uint8_t)(iter & 15)); hamming84_decode(b_cw, &b_out); sink += b_out;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("hamming_secded_74_d56 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
