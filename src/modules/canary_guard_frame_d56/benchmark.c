#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    guarded_frame_t b_f;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        guard_seal(&b_f, 777ULL, (uint64_t)iter, 99ULL); sink += (uint64_t)(guard_verify(&b_f, 777ULL) == 0);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("canary_guard_frame_d56 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
