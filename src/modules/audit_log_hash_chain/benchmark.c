#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint64_t h=1;
    timespec_get(&t0, TIME_UTC);
    volatile uint64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        h = fast_keyed_compress(1ULL, 2ULL, h, (uint64_t)iter, 99ULL); sink += h;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("audit_log_hash_chain us=%.1f sink=%llu\n", us, (unsigned long long)sink);
    return 0;
}
