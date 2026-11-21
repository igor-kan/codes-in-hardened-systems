#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint8_t b_mem[128];
    bump_arena_t b_ar;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        bump_init(&b_ar, b_mem, 128); sink += (uint64_t)(bump_alloc(&b_ar, 16, 8) != NULL);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("bounded_arena_bump_d56 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
