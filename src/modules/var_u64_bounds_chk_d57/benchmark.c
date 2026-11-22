#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    size_t b_tot = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        safe_array_bytes(32, (size_t)iter, 16, &b_tot); sink += b_tot;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("var_u64_bounds_chk_d57 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
