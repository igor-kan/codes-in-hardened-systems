#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    uint64_t l0 = merkle_hash_leaf_d60(1ULL), l1 = merkle_hash_leaf_d60(2ULL);
    uint64_t root = merkle_hash_node_d60(l0, l1);
    merkle_proof_t pr;
    for (size_t i = 0; i < MERKLE_MAX_DEPTH; ++i) { pr.siblings[i] = 0ULL; pr.directions[i] = 0U; }
    pr.depth = 1; pr.siblings[0] = l1; pr.directions[0] = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        sink = sink + (int64_t)merkle_verify_proof_d60(root, 1ULL, &pr);
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("merkle_audit_verify_d60 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
