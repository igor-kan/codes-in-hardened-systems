/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#include <assert.h>
#include <math.h>

static inline void hardened_chunk_alloc_verify_contract_day47(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
