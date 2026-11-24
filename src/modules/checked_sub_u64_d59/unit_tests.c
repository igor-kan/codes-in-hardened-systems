#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(checked_sub_u64_d59_validate_len(1) == CHECKED_SUB_U64_D59_OK);
    uint64_t r = 0;
    assert(safe_sub_u64(100ULL, 40ULL, &r) == 0 && r == 60ULL);
    assert(safe_sub_u64(10ULL, 20ULL, &r) == -1);
    assert(sat_sub_u64(10ULL, 20ULL) == 0ULL);
    assert(checked_sub_u64_d59_verify_guard(true) == CHECKED_SUB_U64_D59_OK);
    return 0;
}
