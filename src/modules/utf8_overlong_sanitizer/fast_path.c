#include "interface.h"
size_t utf8_overlong_sanitizer_scrub(const uint8_t* in, size_t len, uint8_t* out, size_t cap) {
    if (!in || !out) return 0;
    size_t w = 0;
    for (size_t i = 0; i < len && w < cap; ++i) {
        out[w++] = (in[i] <= 0x7FU) ? in[i] : '?';
    }
    return w;
}
