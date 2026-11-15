#define _POSIX_C_SOURCE 200809L
#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    uint8_t buf[256]; for(int i=0;i<256;++i) buf[i]='A'; utf8_san_report_t rep;
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    for (int iter = 0; iter < 2000; ++iter) {
        utf8_overlong_sanitizer_scan(buf, 256, &rep);
    }
    clock_gettime(CLOCK_MONOTONIC, &t1);
    double ns = ((double)(t1.tv_sec - t0.tv_sec) * 1e9 + (double)(t1.tv_nsec - t0.tv_nsec)) / 2000.0;
    printf("utf8_overlong_sanitizer ns=%.2f\n", ns);
    return 0;
}
