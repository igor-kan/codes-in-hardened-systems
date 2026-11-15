#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    const char* p = "var/data/./logs/../archive//2026/entry.bin"; path_jail_result_t r;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 2000; ++iter) {
        path_canonical_jail_normalize(p, 42, &r);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ns = ((double)(t1.tv_sec - t0.tv_sec) * 1e9 + (double)(t1.tv_nsec - t0.tv_nsec)) / 2000.0;
    printf("path_canonical_jail ns=%.2f\n", ns);
    return 0;
}
