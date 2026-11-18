#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(monotonic_epoch_fencing_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    fenced_register_t reg; fenced_init(&reg, 1);
    assert(fenced_write(&reg, 5, 42) && fenced_write(&reg, 5, 43));
    assert(reg.committed_value == 43);
    return 0;
}
