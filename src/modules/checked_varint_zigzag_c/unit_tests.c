#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(checked_varint_zigzag_c_validate_len(1) == CHECKED_VARINT_ZIGZAG_C_OK);
    uint8_t buf[10]; uint64_t dec = 0; size_t used = 0;
    size_t n = leb128_write_u64(zigzag_encode_i64(-1234567LL), buf);
    assert(leb128_read_checked(buf, n, &dec, &used) && used == n);
    assert(zigzag_decode_u64(dec) == -1234567LL);
    uint8_t overlong[2] = {0x81, 0x00};
    assert(!leb128_read_checked(overlong, 2, &dec, &used));
    assert(checked_varint_zigzag_c_verify_guard(true) == CHECKED_VARINT_ZIGZAG_C_OK);
    return 0;
}
