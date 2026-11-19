#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint8_t src[4] = {1,2,3,4}, dst[4] = {0};
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        safe_nonoverlap_copy(dst, 4, src, 4); sink += dst[0];
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("bounds_checked_slice_c11 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
