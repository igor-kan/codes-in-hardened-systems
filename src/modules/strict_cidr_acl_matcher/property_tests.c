#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(strict_cidr_acl_matcher_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    assert(cidr_mask_safe(0) == 0U && cidr_mask_safe(32) == 0xffffffffU && cidr_mask_safe(24) == 0xffffff00U);
    return 0;
}
