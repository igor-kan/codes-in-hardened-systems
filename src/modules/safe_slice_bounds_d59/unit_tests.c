#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(safe_slice_bounds_d59_validate_len(1) == SAFE_SLICE_BOUNDS_D59_OK);
    assert(validate_slice_range(100, 40, 60) == 0);
    assert(validate_slice_range(100, 41, 60) == -1);
    assert(validate_slice_range(100, 50, SIZE_MAX - 10) == -1);
    assert(safe_slice_bounds_d59_verify_guard(true) == SAFE_SLICE_BOUNDS_D59_OK);
    return 0;
}
