#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    int_bucket_t b_bk; bucket_init(&b_bk, 100ULL, 10ULL);
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += (uint64_t)(bucket_take(&b_bk, (uint64_t)iter, 1ULL) == 0);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("rate_token_int_d58 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
