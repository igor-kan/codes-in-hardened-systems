#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    slab64_t b_sb; slab64_init(&b_sb);
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        int sl = slab64_alloc(&b_sb); sink += sl; slab64_free(&b_sb, sl);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("slab_bitmap_alloc_d57 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
