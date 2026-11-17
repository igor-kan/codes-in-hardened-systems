#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    const uint8_t buf[16]={'a','b',0xC3,0xA9,'c'};
    timespec_get(&t0, TIME_UTC);
    volatile uint64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += utf8_strict_validate(buf, 5).codepoints;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("constant_time_utf8_norm us=%.1f sink=%llu\n", us, (unsigned long long)sink);
    return 0;
}
