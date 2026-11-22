#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(seqlock_version_guard_d57_validate_len(1) == SEQLOCK_VERSION_GUARD_D57_OK);
    seqlock_pair_t sl = {0ULL, 0ULL, 0ULL};
    seqlock_write(&sl, 111ULL, 222ULL);
    uint64_t a = 0, b = 0;
    assert(sl.seq == 2ULL && seqlock_try_read(&sl, &a, &b) == 0 && a == 111ULL && b == 222ULL);
    sl.seq += 1ULL;
    assert(seqlock_try_read(&sl, &a, &b) == -1);
    assert(seqlock_version_guard_d57_verify_guard(true) == SEQLOCK_VERSION_GUARD_D57_OK);
    return 0;
}
