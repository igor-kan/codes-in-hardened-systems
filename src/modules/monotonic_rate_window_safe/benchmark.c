#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

static double elapsed_ns(struct timespec a, struct timespec b) {
    return (double)(b.tv_sec - a.tv_sec) * 1e9 + (double)(b.tv_nsec - a.tv_nsec);
}

int main(void) {
    size_t sink = 0;
    safe_limiter_t lim; slim_init(&lim, 10000, 5000, 0);
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 200; ++iter) {
        if(slim_allow(&lim, (uint64_t)iter * 1000000ULL, 1)) sink += lim.tokens;
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    printf("monotonic_rate_window_safe ns=%.1f sink=%zu\n", elapsed_ns(t0, t1) / 200.0, sink);
    return 0;
}
