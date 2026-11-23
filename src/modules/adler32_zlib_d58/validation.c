#include "interface.h"

adler32_zlib_d58_err_t adler32_zlib_d58_validate_len(size_t n) {
    if (n == 0) {
        return ADLER32_ZLIB_D58_ERR_INVALID;
    }
    return ADLER32_ZLIB_D58_OK;
}
