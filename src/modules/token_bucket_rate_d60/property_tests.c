#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(token_bucket_rate_d60_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    token_bucket_t tb;
    tb_init_d60(&tb, 100ULL, 1000ULL, 0ULL);
    assert(tb_allow_d60(&tb, 50000000000ULL, 50ULL));
    assert(tb.tokens <= 100ULL);
    return 0;
}
