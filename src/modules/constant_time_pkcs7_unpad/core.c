#include "interface.h"

uint8_t constant_time_pkcs7_unpad_eq_mask(uint8_t a, uint8_t b) {
    uint32_t x = (uint32_t)(a ^ b);
    return (uint8_t)((x - 1U) >> 31); // 1 if equal, 0 if unequal, assuming 0<=x<=255
}

static uint8_t ct_le_mask(size_t a, size_t b) {
    // Returns 1 if a <= b (for small sizes < 1024), 0 otherwise
    uint32_t diff = (uint32_t)b - (uint32_t)a;
    return (uint8_t)(1U ^ (diff >> 31));
}

constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_verify(const uint8_t* block, size_t block_len, size_t* out_unpadded_len) {
    if (!block || !out_unpadded_len) return CONSTANT_TIME_PKCS7_UNPAD_ERR_NULL;
    if (block_len == 0 || block_len > PKCS7_MAX_BLOCK) return CONSTANT_TIME_PKCS7_UNPAD_ERR_BOUNDS;
    uint8_t pad = block[block_len - 1];
    uint8_t valid = 1U;
    // Reject pad == 0 or pad > block_len branchlessly
    valid &= (uint8_t)(1U ^ constant_time_pkcs7_unpad_eq_mask(pad, 0));
    valid &= ct_le_mask(pad, block_len);
    for (size_t i = 0; i < block_len; ++i) {
        size_t from_end = block_len - i;
        uint8_t in_pad = ct_le_mask(from_end, pad);
        uint8_t matches = constant_time_pkcs7_unpad_eq_mask(block[i], pad);
        valid &= (uint8_t)(1U ^ (in_pad & (1U ^ matches)));
    }
    size_t unpadded = block_len - (size_t)(valid ? pad : 0);
    *out_unpadded_len = unpadded;
    return valid ? CONSTANT_TIME_PKCS7_UNPAD_OK : CONSTANT_TIME_PKCS7_UNPAD_ERR_INVALID;
}

constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_pad(uint8_t* buf, size_t data_len, size_t block_size, size_t* out_total) {
    if (!buf || !out_total || block_size == 0 || block_size > PKCS7_MAX_BLOCK) return CONSTANT_TIME_PKCS7_UNPAD_ERR_INVALID;
    size_t pad = block_size - (data_len % block_size);
    for (size_t i = 0; i < pad; ++i) buf[data_len + i] = (uint8_t)pad;
    *out_total = data_len + pad;
    return CONSTANT_TIME_PKCS7_UNPAD_OK;
}
