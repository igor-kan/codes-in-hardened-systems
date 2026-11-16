#include "interface.h"

size_t cthex_encoded_len(size_t raw_len) {
    if (raw_len > (SIZE_MAX - 1U) / 2U) return 0U;
    return raw_len * 2U;
}

static inline char fast_nib_to_char(uint8_t n) {
    uint8_t d = n & 0x0FU;
    uint8_t m = (uint8_t)((9U - d) >> 7);
    return (char)(d + 48U + (m & 39U));
}

constant_time_hex_decode_err_t cthex_encode_unrolled4(const uint8_t* src, size_t len, char* dst, size_t dst_cap) {
    if (!dst || (len > 0 && !src)) return CONSTANT_TIME_HEX_DECODE_ERR_NULL;
    if (len > (SIZE_MAX - 1U) / 2U || dst_cap < len * 2U + 1U) return CONSTANT_TIME_HEX_DECODE_ERR_BOUNDS;
    size_t i = 0;
    for (; i + 4U <= len; i += 4U) {
        for (size_t k = 0; k < 4U; ++k) {
            uint8_t b = src[i + k];
            dst[(i + k) * 2U]      = fast_nib_to_char(b >> 4);
            dst[(i + k) * 2U + 1U] = fast_nib_to_char(b & 0x0FU);
        }
    }
    for (; i < len; ++i) {
        dst[i * 2U]      = fast_nib_to_char(src[i] >> 4);
        dst[i * 2U + 1U] = fast_nib_to_char(src[i] & 0x0FU);
    }
    dst[len * 2U] = '\0';
    return CONSTANT_TIME_HEX_DECODE_OK;
}
