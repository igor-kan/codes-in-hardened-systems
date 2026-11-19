#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(bounds_checked_slice_c11_validate_len(1) == BOUNDS_CHECKED_SLICE_C11_OK);
    uint8_t buf[8] = {10, 20, 30, 40, 50, 60, 70, 80}, dst[4] = {0};
    safe_span_t root = {buf, 8}, sub = {NULL, 0};
    assert(safe_subslice(root, 2, 4, &sub) && sub.ptr[0] == 30);
    assert(!safe_subslice(root, 6, 4, &sub));
    assert(safe_nonoverlap_copy(dst, 4, sub.ptr, 4) && dst[3] == 60);
    assert(!safe_nonoverlap_copy(buf + 1, 6, buf, 4));
    assert(bounds_checked_slice_c11_verify_guard(true) == BOUNDS_CHECKED_SLICE_C11_OK);
    return 0;
}
