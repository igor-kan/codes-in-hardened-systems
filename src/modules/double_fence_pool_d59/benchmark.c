#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    gen_pool_t bgp; gp_init(&bgp); gen_handle_t bh = {0,0};
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        gp_alloc(&bgp, &bh); sink += bh.gen; gp_free(&bgp, bh);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("double_fence_pool_d59 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
