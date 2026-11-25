#include "interface.h"
#include <math.h>
#include <string.h>

size_t cobs_encode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap) {
    if (cap < 1U) return 0;
    size_t code_idx = 0, write_idx = 1;
    uint8_t code = 1;
    for (size_t i = 0; i < n; ++i) {
        if (in[i] == 0) {
            out[code_idx] = code;
            code_idx = write_idx++;
            if (code_idx >= cap) return 0;
            code = 1;
        } else {
            if (write_idx >= cap) return 0;
            out[write_idx++] = in[i];
            ++code;
            if (code == 0xffU) {
                out[code_idx] = code;
                code_idx = write_idx++;
                if (code_idx >= cap) return 0;
                code = 1;
            }
        }
    }
    out[code_idx] = code;
    return write_idx;
}
bool cobs_decode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap, size_t* out_len) {
    size_t r = 0, w = 0;
    while (r < n) {
        uint8_t code = in[r++];
        if (code == 0) return false;
        for (uint8_t k = 1; k < code; ++k) {
            if (r >= n || w >= cap) return false;
            out[w++] = in[r++];
        }
        if (code < 0xffU && r < n) {
            if (w >= cap) return false;
            out[w++] = 0;
        }
    }
    *out_len = w;
    return true;
}
