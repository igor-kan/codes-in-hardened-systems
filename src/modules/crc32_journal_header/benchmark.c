#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

static double elapsed_ns(struct timespec a, struct timespec b) {
    return (double)(b.tv_sec - a.tv_sec) * 1e9 + (double)(b.tv_nsec - a.tv_nsec);
}

int main(void) {
    size_t sink = 0;
    uint8_t p[128]={0}, f[160]; size_t fl=0; jhdr_t h;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 200; ++iter) {
        jhdr_seal(1, 0, p, 128, f, sizeof(f), &fl); jhdr_verify_frame(f, fl, 256, &h); sink+=h.payload_len;
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    printf("crc32_journal_header ns=%.1f sink=%zu\n", elapsed_ns(t0, t1) / 200.0, sink);
    return 0;
}
