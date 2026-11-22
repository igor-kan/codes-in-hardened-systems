#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    rz_buf32_t b_rz; rz32_init(&b_rz);
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        rz32_write(&b_rz, (size_t)(iter & 31), (uint8_t)iter); sink += (uint64_t)(rz32_check(&b_rz) == 0);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("redzone_canary_buf_d57 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
