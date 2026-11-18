#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    int64_t a[8] = {8,7,6,5,4,3,2,1};
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        ct_sort_net8(a); sink += a[0];
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("constant_time_sort_net8 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
