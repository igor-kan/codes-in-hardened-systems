#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    char b[64]; safe_writer_t w;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 2000; ++iter) {
        safe_snprintf_writer_init(&w, b, 64); safe_snprintf_writer_append_str(&w, "rec:"); safe_snprintf_writer_append_u64(&w, (uint64_t)iter);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ns = ((double)(t1.tv_sec - t0.tv_sec) * 1e9 + (double)(t1.tv_nsec - t0.tv_nsec)) / 2000.0;
    printf("safe_snprintf_writer ns=%.2f\n", ns);
    return 0;
}
