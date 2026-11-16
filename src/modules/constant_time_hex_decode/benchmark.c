#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

static double elapsed_ns(struct timespec a, struct timespec b) {
    return (double)(b.tv_sec - a.tv_sec) * 1e9 + (double)(b.tv_nsec - a.tv_nsec);
}

int main(void) {
    size_t sink = 0;
    uint8_t s[128]={0}, d[128]; char h[260]; size_t dl=0;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 200; ++iter) {
        cthex_encode(s, 128, h, sizeof(h)); cthex_decode(h, 256, d, 128, &dl); sink += dl;
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    printf("constant_time_hex_decode ns=%.1f sink=%zu\n", elapsed_ns(t0, t1) / 200.0, sink);
    return 0;
}
