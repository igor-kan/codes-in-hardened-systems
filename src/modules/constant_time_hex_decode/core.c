#include "interface.h"

static inline char nib_to_hex(uint8_t v) {
    uint8_t d = v & 0x0FU;
    // Branchless: '0'=48, 'a'=97 (diff 49, so add 39 if >= 10)
    uint8_t mask = (uint8_t)((9U - d) >> 7); // 0 if d<=9, 0xFF if d>=10
    return (char)(d + 48U + (mask & 39U));
}

static inline int hex_to_nib_ct(uint8_t c, uint8_t* nib_out) {
    uint8_t is_num = (uint8_t)(((c ^ 0x30U) < 10U) ? 1U : 0U);
    uint8_t lo_c = (uint8_t)(c | 0x20U);
    uint8_t is_alpha = (uint8_t)((lo_c >= 'a' && lo_c <= 'f') ? 1U : 0U);
    // Pure bitmask selection without table reads
    uint8_t m_num = (uint8_t)(-(int8_t)is_num);
    uint8_t m_alp = (uint8_t)(-(int8_t)is_alpha);
    uint8_t v_num = (uint8_t)(c - '0');
    uint8_t v_alp = (uint8_t)(lo_c - 'a' + 10U);
    *nib_out = (uint8_t)((m_num & v_num) | (m_alp & v_alp));
    return (int)(is_num | is_alpha);
}

constant_time_hex_decode_err_t cthex_encode(const uint8_t* src, size_t len, char* dst, size_t dst_cap) {
    if (!dst || (len > 0 && !src)) return CONSTANT_TIME_HEX_DECODE_ERR_NULL;
    if (len > (SIZE_MAX - 1U) / 2U || dst_cap < len * 2U + 1U) return CONSTANT_TIME_HEX_DECODE_ERR_BOUNDS;
    for (size_t i = 0; i < len; ++i) {
        dst[2U * i]      = nib_to_hex(src[i] >> 4);
        dst[2U * i + 1U] = nib_to_hex(src[i] & 0x0FU);
    }
    dst[len * 2U] = '\0';
    return CONSTANT_TIME_HEX_DECODE_OK;
}

constant_time_hex_decode_err_t cthex_decode(const char* hex, size_t hex_len, uint8_t* out, size_t out_cap, size_t* out_len) {
    if (!hex || !out || !out_len) return CONSTANT_TIME_HEX_DECODE_ERR_NULL;
    if (hex_len & 1U) return CONSTANT_TIME_HEX_DECODE_ERR_INVALID;
    size_t n = hex_len / 2U;
    if (n > out_cap) return CONSTANT_TIME_HEX_DECODE_ERR_BOUNDS;
    int all_valid = 1;
    for (size_t i = 0; i < n; ++i) {
        uint8_t hi = 0, lo = 0;
        all_valid &= hex_to_nib_ct((uint8_t)hex[2U * i], &hi);
        all_valid &= hex_to_nib_ct((uint8_t)hex[2U * i + 1U], &lo);
        out[i] = (uint8_t)((hi << 4) | lo);
    }
    if (!all_valid) {
        for (size_t i = 0; i < n; ++i) out[i] = 0;
        *out_len = 0;
        return CONSTANT_TIME_HEX_DECODE_ERR_INVALID;
    }
    *out_len = n;
    return CONSTANT_TIME_HEX_DECODE_OK;
}
