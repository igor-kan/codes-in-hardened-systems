#include "interface.h"
constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_check_invariants(size_t bsize) {
    uint8_t buf[64] = {1, 2, 3, 4, 5};
    size_t total = 0, unpad = 0;
    if (constant_time_pkcs7_unpad_pad(buf, 5, bsize, &total) != CONSTANT_TIME_PKCS7_UNPAD_OK) return CONSTANT_TIME_PKCS7_UNPAD_ERR_INVALID;
    if (constant_time_pkcs7_unpad_verify(buf + (total - bsize), bsize, &unpad) != CONSTANT_TIME_PKCS7_UNPAD_OK) return CONSTANT_TIME_PKCS7_UNPAD_ERR_INVARIANT;
    return CONSTANT_TIME_PKCS7_UNPAD_OK;
}
