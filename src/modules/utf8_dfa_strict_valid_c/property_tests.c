#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(utf8_dfa_strict_valid_c_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t trunc[2] = {0xe2, 0x82}; assert(!strict_utf8_valid(trunc, 2));
    return 0;
}
