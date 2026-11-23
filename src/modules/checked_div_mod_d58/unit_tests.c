#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(checked_div_mod_d58_validate_len(1) == CHECKED_DIV_MOD_D58_OK);
    int64_t q = 0, r = 0;
    assert(safe_div_i64(23, 5, &q, &r) == 0 && q == 4 && r == 3);
    assert(safe_div_i64(10, 0, &q, &r) == -1);
    assert(safe_div_i64(INT64_MIN, -1, &q, &r) == -1);
    assert(checked_div_mod_d58_verify_guard(true) == CHECKED_DIV_MOD_D58_OK);
    return 0;
}
