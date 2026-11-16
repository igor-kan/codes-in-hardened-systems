#include "interface.h"
#include <assert.h>

int main(void) {
    assert(slim_mt_sim(4) == MONOTONIC_RATE_WINDOW_SAFE_OK);
    safe_limiter_t lim;
    slim_init(&lim, 100, 1000000000ULL, 0);
    assert(slim_allow(&lim, UINT64_MAX - 5ULL, 100));
    assert(slim_verify_invariants(&lim) == MONOTONIC_RATE_WINDOW_SAFE_OK);
    return 0;
}
