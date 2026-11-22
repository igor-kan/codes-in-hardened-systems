#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(redzone_canary_buf_d57_validate_len(1) == REDZONE_CANARY_BUF_D57_OK);
    rz_buf32_t b; rz32_init(&b);
    assert(rz32_write(&b, 31, 0x55) == 0 && rz32_write(&b, 32, 0x55) == -1);
    assert(rz32_check(&b) == 0);
    b.tail_guard ^= 1ULL;
    assert(rz32_check(&b) == -1);
    assert(redzone_canary_buf_d57_verify_guard(true) == REDZONE_CANARY_BUF_D57_OK);
    return 0;
}
