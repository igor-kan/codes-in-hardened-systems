#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(var_u64_bounds_chk_d57_validate_len(1) == VAR_U64_BOUNDS_CHK_D57_OK);
    size_t tot = 0;
    assert(safe_array_bytes(16, 100, 8, &tot) == 0 && tot == 816);
    assert(safe_array_bytes(16, SIZE_MAX / 4, 8, &tot) == -1);
    assert(var_u64_bounds_chk_d57_verify_guard(true) == VAR_U64_BOUNDS_CHK_D57_OK);
    return 0;
}
