#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    uint8_t b[16] = {1,2,3,4, 12,12,12,12,12,12,12,12,12,12,12,12}; size_t u=0;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 2000; ++iter) {
        constant_time_pkcs7_unpad_verify(b, 16, &u);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ns = ((double)(t1.tv_sec - t0.tv_sec) * 1e9 + (double)(t1.tv_nsec - t0.tv_nsec)) / 2000.0;
    printf("constant_time_pkcs7_unpad ns=%.2f\n", ns);
    return 0;
}
