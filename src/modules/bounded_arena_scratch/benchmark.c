#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint8_t buf[1024]; guarded_arena_t a; arena_init(&a, buf, sizeof(buf));
    timespec_get(&t0, TIME_UTC);
    volatile uint64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        arena_rewind(&a, 0); void* p=arena_alloc_aligned(&a, 64, 16); sink += (p != NULL);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("bounded_arena_scratch us=%.1f sink=%llu\n", us, (unsigned long long)sink);
    return 0;
}
