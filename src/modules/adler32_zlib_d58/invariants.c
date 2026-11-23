#include "interface.h"

adler32_zlib_d58_err_t adler32_zlib_d58_verify_guard(bool cond) {
    if (!cond) {
        return ADLER32_ZLIB_D58_ERR_INVARIANT;
    }
    return ADLER32_ZLIB_D58_OK;
}
