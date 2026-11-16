#include "interface.h"

size_t b64u_decoded_max_len(size_t encoded_len) {
    if (encoded_len > (SIZE_MAX / 3U) - 3U) return 0U;
    return ((encoded_len + 3U) / 4U) * 3U;
}

bool b64u_is_canonical_charset(const char* src, size_t len) {
    if (!src) return false;
    for (size_t i = 0; i < len; ++i) {
        char c = src[i];
        bool ok = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '-' || c == '_';
        if (!ok) return false;
    }
    return true;
}
