#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(bounded_str_copy_d58_validate_len(1) == BOUNDED_STR_COPY_D58_OK);
    char out[6]; size_t n = 0;
    assert(safe_cstr_copy(out, 6, "hello", &n) == 0 && n == 5 && out[5] == 0);
    assert(safe_cstr_copy(out, 4, "hello", &n) == -1 && n == 3 && out[3] == 0);
    assert(bounded_str_copy_d58_verify_guard(true) == BOUNDED_STR_COPY_D58_OK);
    return 0;
}
