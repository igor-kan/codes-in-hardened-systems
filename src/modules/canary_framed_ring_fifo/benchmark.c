#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    canary_ring_t q; cring_init(&q); uint64_t v = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        cring_push(&q, (uint64_t)iter); cring_pop(&q, &v); sink += (int64_t)v;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("canary_framed_ring_fifo us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
