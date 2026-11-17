#include "interface.h"

bool utf8_fast_ascii_prefix(const uint8_t* data, size_t len, size_t* out_ascii_len) {
    size_t i = 0;
    while (i < len && (data[i] & 0x80U) == 0) ++i;
    if (out_ascii_len) *out_ascii_len = i;
    return i == len;
}
