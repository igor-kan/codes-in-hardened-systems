#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(adler32_zlib_d58_validate_len(1) == ADLER32_ZLIB_D58_OK);
    const uint8_t vec[9] = {'W','i','k','i','p','e','d','i','a'};
    assert(adler32_compute(vec, 9) == 0x11E60398u);
    assert(adler32_zlib_d58_verify_guard(true) == ADLER32_ZLIB_D58_OK);
    return 0;
}
