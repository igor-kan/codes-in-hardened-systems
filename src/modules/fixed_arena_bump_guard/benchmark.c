#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

static double elapsed_ns(struct timespec a, struct timespec b) {
    return (double)(b.tv_sec - a.tv_sec) * 1e9 + (double)(b.tv_nsec - a.tv_nsec);
}

int main(void) {
    size_t sink = 0;
    uint8_t buf[1024]; guarded_arena_t a; garena_init(&a, buf, sizeof(buf));
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 200; ++iter) {
        garena_reset_wipe(&a); for(int i=0;i<16;++i) { void* p = garena_alloc(&a, 32, 16); sink += (uintptr_t)p & 0xFFU; }
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    printf("fixed_arena_bump_guard ns=%.1f sink=%zu\n", elapsed_ns(t0, t1) / 200.0, sink);
    return 0;
}
