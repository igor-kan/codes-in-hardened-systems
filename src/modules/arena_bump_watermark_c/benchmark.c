#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    safe_arena_t a; sarena_init(&a);
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sarena_reset(&a); void* p = sarena_alloc(&a, 32, 8); sink += p != NULL ? 1 : 0;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("arena_bump_watermark_c us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
