#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    const uint16_t b_w[4] = {3, 7, 11, 13};
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += fletcher32_words(b_w, 4);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("fletcher32_dual_acc_d56 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
