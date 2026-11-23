#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    char b_dst[16]; size_t b_w = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        safe_cstr_copy(b_dst, 16, "hardened", &b_w); sink += b_w;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("bounded_str_copy_d58 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
