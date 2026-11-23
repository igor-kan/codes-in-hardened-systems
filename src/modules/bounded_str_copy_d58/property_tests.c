#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(bounded_str_copy_d58_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    char b[1]; size_t w = 99;
    assert(safe_cstr_copy(b, 1, "a", &w) == -1 && b[0] == 0 && w == 0);
    return 0;
}
