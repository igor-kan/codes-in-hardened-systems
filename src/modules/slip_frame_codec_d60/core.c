#include "interface.h"
#include <math.h>
#include <string.h>

size_t slip_encode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap) {
    size_t w = 0;
    if (w < cap) out[w++] = (uint8_t)SLIP_END;
    for (size_t i = 0; i < n; ++i) {
        if (in[i] == SLIP_END) {
            if (w + 2U > cap) return 0;
            out[w++] = (uint8_t)SLIP_ESC; out[w++] = (uint8_t)SLIP_ESC_END;
        } else if (in[i] == SLIP_ESC) {
            if (w + 2U > cap) return 0;
            out[w++] = (uint8_t)SLIP_ESC; out[w++] = (uint8_t)SLIP_ESC_ESC;
        } else {
            if (w + 1U > cap) return 0;
            out[w++] = in[i];
        }
    }
    if (w + 1U > cap) return 0;
    out[w++] = (uint8_t)SLIP_END;
    return w;
}
bool slip_decode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap, size_t* out_len) {
    size_t w = 0;
    bool esc = false;
    for (size_t i = 0; i < n; ++i) {
        uint8_t b = in[i];
        if (esc) {
            if (b == SLIP_ESC_END) { if (w >= cap) return false; out[w++] = (uint8_t)SLIP_END; }
            else if (b == SLIP_ESC_ESC) { if (w >= cap) return false; out[w++] = (uint8_t)SLIP_ESC; }
            else return false;
            esc = false;
        } else if (b == SLIP_ESC) {
            esc = true;
        } else if (b == SLIP_END) {
            if (w > 0) { *out_len = w; return true; }
        } else {
            if (w >= cap) return false;
            out[w++] = b;
        }
    }
    if (esc) return false;
    *out_len = w;
    return true;
}
