#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(canary_guard_frame_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    guarded_frame_t f;
    guard_seal(&f, 12345ULL, 10ULL, 20ULL);
    assert(guard_verify(&f, 12346ULL) == -1);
    return 0;
}
