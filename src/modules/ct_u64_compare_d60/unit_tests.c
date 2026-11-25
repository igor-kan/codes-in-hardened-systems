#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(ct_u64_compare_d60_validate_len(1) == CT_U64_COMPARE_D60_OK);
    const uint8_t x[8] = {1,2,3,4,5,6,7,8};
    const uint8_t y[8] = {1,2,3,4,5,6,7,8};
    const uint8_t z[8] = {1,2,3,4,5,6,7,9};
    assert(ct_memeq_d60(x, y, 8) == 1U);
    assert(ct_memeq_d60(x, z, 8) == 0U);
    assert(ct_select_u64_d60(1U, 100ULL, 200ULL) == 100ULL);
    assert(ct_u64_compare_d60_verify_guard(true) == CT_U64_COMPARE_D60_OK);
    return 0;
}
