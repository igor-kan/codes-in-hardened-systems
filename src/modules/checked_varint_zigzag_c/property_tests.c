#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(checked_varint_zigzag_c_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    assert(zigzag_encode_i64(-1) == 1ULL && zigzag_encode_i64(1) == 2ULL);
    return 0;
}
