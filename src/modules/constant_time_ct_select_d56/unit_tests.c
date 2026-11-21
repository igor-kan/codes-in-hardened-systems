#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(constant_time_ct_select_d56_validate_len(1) == CONSTANT_TIME_CT_SELECT_D56_OK);
    assert(ct_select_u64(1, 0xAAAAu, 0xBBBBu) == 0xAAAAu);
    assert(ct_select_u64(0, 0xAAAAu, 0xBBBBu) == 0xBBBBu);
    const uint8_t x[4] = {1, 2, 3, 4};
    const uint8_t y[4] = {1, 2, 3, 4};
    const uint8_t z[4] = {1, 2, 3, 5};
    assert(ct_mem_equal(x, y, 4) == 1 && ct_mem_equal(x, z, 4) == 0);
    assert(constant_time_ct_select_d56_verify_guard(true) == CONSTANT_TIME_CT_SELECT_D56_OK);
    return 0;
}
