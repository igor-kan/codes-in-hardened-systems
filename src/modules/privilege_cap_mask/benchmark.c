#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    cap_cred_t c; privilege_cap_mask_init(&c, CAP_NET_BIND | CAP_DAC_READ); privilege_cap_mask_set_effective(&c, CAP_NET_BIND);
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 2000; ++iter) {
        privilege_cap_mask_has_effective(&c, CAP_NET_BIND);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ns = ((double)(t1.tv_sec - t0.tv_sec) * 1e9 + (double)(t1.tv_nsec - t0.tv_nsec)) / 2000.0;
    printf("privilege_cap_mask ns=%.2f\n", ns);
    return 0;
}
