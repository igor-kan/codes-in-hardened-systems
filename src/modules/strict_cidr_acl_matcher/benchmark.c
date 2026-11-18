#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    cidr_rule_t rules[2] = {{0x0a000000U, 8, true}, {0x0a010000U, 16, false}};
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink += cidr_acl_evaluate(rules, 2, 0x0a020001U, false) ? 1 : 0;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("strict_cidr_acl_matcher us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
