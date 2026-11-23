#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    int64_t bq = 0, br = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        safe_div_i64(1000LL + (int64_t)iter, 7LL, &bq, &br); sink += bq + br;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("checked_div_mod_d58 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
