#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(constant_time_memeq_c11_validate_len(1) == CONSTANT_TIME_MEMEQ_C11_OK);
    uint8_t x[6] = {1, 2, 3, 4, 5, 6}, y[6] = {1, 2, 3, 4, 5, 6}, z[6] = {1, 2, 3, 9, 5, 6};
    assert(ct_mem_equal(x, y, 6));
    assert(!ct_mem_equal(x, z, 6));
    assert(constant_time_memeq_c11_verify_guard(true) == CONSTANT_TIME_MEMEQ_C11_OK);
    return 0;
}
