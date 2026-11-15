#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    journal_ring_t j; ring_journal_checksum_init(&j); const uint8_t d[32]={0x41};
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 2000; ++iter) {
        ring_journal_checksum_append(&j, d, 32);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ns = ((double)(t1.tv_sec - t0.tv_sec) * 1e9 + (double)(t1.tv_nsec - t0.tv_nsec)) / 2000.0;
    printf("ring_journal_checksum ns=%.2f\n", ns);
    return 0;
}
