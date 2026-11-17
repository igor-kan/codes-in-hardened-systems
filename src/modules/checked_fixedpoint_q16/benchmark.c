#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    q16_t a=3<<16, b=5<<16, o=0;
    timespec_get(&t0, TIME_UTC);
    volatile uint64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        q16_mul_checked(a, b, &o); sink += o;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("checked_fixedpoint_q16 us=%.1f sink=%llu\n", us, (unsigned long long)sink);
    return 0;
}
