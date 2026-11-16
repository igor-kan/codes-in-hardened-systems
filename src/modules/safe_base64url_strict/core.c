#include "interface.h"

static const char B64U_ENC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";

static int b64u_val(char c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return c - 'a' + 26;
    if (c >= '0' && c <= '9') return c - '0' + 52;
    if (c == '-') return 62;
    if (c == '_') return 63;
    return -1;
}

safe_base64url_strict_err_t b64u_encode(const uint8_t* src, size_t len, char* dst, size_t dst_cap, size_t* out_len) {
    if (!dst || !out_len || (len > 0 && !src)) return SAFE_BASE64URL_STRICT_ERR_NULL;
    size_t req = (len / 3U) * 4U + ((len % 3U) == 1U ? 2U : ((len % 3U) == 2U ? 3U : 0U));
    if (req + 1U > dst_cap) return SAFE_BASE64URL_STRICT_ERR_BOUNDS;
    size_t i = 0, w = 0;
    while (i + 3U <= len) {
        uint32_t v = ((uint32_t)src[i] << 16) | ((uint32_t)src[i+1] << 8) | src[i+2];
        dst[w++] = B64U_ENC[(v >> 18) & 63U];
        dst[w++] = B64U_ENC[(v >> 12) & 63U];
        dst[w++] = B64U_ENC[(v >> 6) & 63U];
        dst[w++] = B64U_ENC[v & 63U];
        i += 3U;
    }
    size_t rem = len - i;
    if (rem == 1U) {
        uint32_t v = (uint32_t)src[i] << 16;
        dst[w++] = B64U_ENC[(v >> 18) & 63U];
        dst[w++] = B64U_ENC[(v >> 12) & 63U];
    } else if (rem == 2U) {
        uint32_t v = ((uint32_t)src[i] << 16) | ((uint32_t)src[i+1] << 8);
        dst[w++] = B64U_ENC[(v >> 18) & 63U];
        dst[w++] = B64U_ENC[(v >> 12) & 63U];
        dst[w++] = B64U_ENC[(v >> 6) & 63U];
    }
    dst[w] = '\0';
    *out_len = w;
    return SAFE_BASE64URL_STRICT_OK;
}

safe_base64url_strict_err_t b64u_decode_strict(const char* src, size_t len, uint8_t* dst, size_t dst_cap, size_t* out_len) {
    if (!src || !dst || !out_len) return SAFE_BASE64URL_STRICT_ERR_NULL;
    if ((len % 4U) == 1U) return SAFE_BASE64URL_STRICT_ERR_INVALID;
    size_t exp_out = (len / 4U) * 3U + ((len % 4U) == 2U ? 1U : ((len % 4U) == 3U ? 2U : 0U));
    if (exp_out > dst_cap) return SAFE_BASE64URL_STRICT_ERR_BOUNDS;
    size_t i = 0, w = 0;
    while (i + 4U <= len) {
        int c0 = b64u_val(src[i]), c1 = b64u_val(src[i+1]), c2 = b64u_val(src[i+2]), c3 = b64u_val(src[i+3]);
        if (c0 < 0 || c1 < 0 || c2 < 0 || c3 < 0) return SAFE_BASE64URL_STRICT_ERR_INVALID;
        uint32_t v = ((uint32_t)c0 << 18) | ((uint32_t)c1 << 12) | ((uint32_t)c2 << 6) | (uint32_t)c3;
        dst[w++] = (uint8_t)(v >> 16);
        dst[w++] = (uint8_t)(v >> 8);
        dst[w++] = (uint8_t)v;
        i += 4U;
    }
    size_t rem = len - i;
    if (rem == 2U) {
        int c0 = b64u_val(src[i]), c1 = b64u_val(src[i+1]);
        if (c0 < 0 || c1 < 0 || (c1 & 0x0F) != 0) return SAFE_BASE64URL_STRICT_ERR_INVALID;
        dst[w++] = (uint8_t)((c0 << 2) | (c1 >> 4));
    } else if (rem == 3U) {
        int c0 = b64u_val(src[i]), c1 = b64u_val(src[i+1]), c2 = b64u_val(src[i+2]);
        if (c0 < 0 || c1 < 0 || c2 < 0 || (c2 & 0x03) != 0) return SAFE_BASE64URL_STRICT_ERR_INVALID;
        dst[w++] = (uint8_t)((c0 << 2) | (c1 >> 4));
        dst[w++] = (uint8_t)(((c1 & 0x0F) << 4) | (c2 >> 2));
    }
    *out_len = w;
    return SAFE_BASE64URL_STRICT_OK;
}
