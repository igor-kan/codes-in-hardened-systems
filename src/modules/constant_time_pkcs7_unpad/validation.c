#include "interface.h"
constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_validate_blocksize(size_t bsize) {
    if (bsize == 0 || bsize > PKCS7_MAX_BLOCK) return CONSTANT_TIME_PKCS7_UNPAD_ERR_BOUNDS;
    return CONSTANT_TIME_PKCS7_UNPAD_OK;
}
