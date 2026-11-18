#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    wal_frame_t f; const uint8_t msg[4] = {1,2,3,4}; wal_seal_frame(&f, 1ULL, msg, 4);
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += wal_verify_frame(&f) ? 1 : 0;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("journal_wal_torn_guard us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
