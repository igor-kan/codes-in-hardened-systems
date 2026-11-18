#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(siphash13_keyed_cookie_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    cookie_key_t k = {1ULL, 2ULL};
    uint64_t c = sipcookie_make(k, 42ULL, 10U);
    assert(!sipcookie_verify(k, 42ULL, 10U, c ^ (1ULL << 40)));
    return 0;
}
