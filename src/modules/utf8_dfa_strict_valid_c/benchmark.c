#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    const uint8_t ok[5] = {'a', 'b', 'c', 0xc3, 0xa9};
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += strict_utf8_valid(ok, 5) ? 1 : 0;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("utf8_dfa_strict_valid_c us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
