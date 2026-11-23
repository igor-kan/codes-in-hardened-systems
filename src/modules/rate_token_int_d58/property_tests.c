#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(rate_token_int_d58_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    int_bucket_t bk; bucket_init(&bk, 5ULL, 100ULL);
    assert(bucket_take(&bk, 1000000ULL, 0ULL) == 0 && bk.credits == 5ULL);
    return 0;
}
