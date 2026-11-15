#include "interface.h"
constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_verify_batch(const uint8_t* blocks, size_t bsize, size_t nblocks) {
    if (!blocks || bsize == 0) return CONSTANT_TIME_PKCS7_UNPAD_ERR_NULL;
    for (size_t i = 0; i < nblocks; ++i) {
        size_t ulen = 0;
        constant_time_pkcs7_unpad_err_t e = constant_time_pkcs7_unpad_verify(blocks + i * bsize, bsize, &ulen);
        if (e != CONSTANT_TIME_PKCS7_UNPAD_OK) return e;
    }
    return CONSTANT_TIME_PKCS7_UNPAD_OK;
}
