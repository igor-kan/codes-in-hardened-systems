#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

static double elapsed_ns(struct timespec a, struct timespec b) {
    return (double)(b.tv_sec - a.tv_sec) * 1e9 + (double)(b.tv_nsec - a.tv_nsec);
}

int main(void) {
    size_t sink = 0;
    int64_t o=0; int64_t x=1234567, y=891011;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 200; ++iter) {
        checked_mul_i64(x, y, &o); sink += (size_t)o;
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    printf("checked_i64_mul_div ns=%.1f sink=%zu\n", elapsed_ns(t0, t1) / 200.0, sink);
    return 0;
}
