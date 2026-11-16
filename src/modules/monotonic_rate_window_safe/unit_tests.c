#include "interface.h"
#include <assert.h>

int main(void) {
    safe_limiter_t lim;
    assert(slim_init(&lim, 5, 2, 1000ULL) == MONOTONIC_RATE_WINDOW_SAFE_OK);
    assert(slim_allow(&lim, 1000ULL, 5));
    assert(!slim_allow(&lim, 500ULL, 1));
    assert(!slim_allow(&lim, 100000000ULL, 1));
    assert(slim_allow(&lim, 1000001000ULL, 2));
    assert(slim_verify_invariants(&lim) == MONOTONIC_RATE_WINDOW_SAFE_OK);
    return 0;
}
