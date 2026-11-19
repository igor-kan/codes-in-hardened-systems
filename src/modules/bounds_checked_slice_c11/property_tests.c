#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(bounds_checked_slice_c11_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    safe_span_t s = {(const uint8_t*)"abc", 3}, o; assert(!safe_subslice(s, (size_t)-1, 2, &o));
    return 0;
}
