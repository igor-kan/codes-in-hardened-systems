#include "interface.h"
#include <math.h>
#include <string.h>

size_t b32_crockford_encode_d60(const uint8_t* in, size_t n, char* out, size_t cap) {
    static const char* kAlpha = "0123456789ABCDEFGHJKMNPQRSTVWXYZ";
    uint32_t buf = 0;
    int bits = 0;
    size_t w = 0;
    for (size_t i = 0; i < n; ++i) {
        buf = (buf << 8) | in[i];
        bits += 8;
        while (bits >= 5) {
            if (w >= cap) return 0;
            bits -= 5;
            out[w++] = kAlpha[(buf >> bits) & 31U];
        }
    }
    if (bits > 0) {
        if (w >= cap) return 0;
        out[w++] = kAlpha[(buf << (5 - bits)) & 31U];
    }
    return w;
}
static int crock_val(char ch) {
    if (ch >= 'a' && ch <= 'z') ch = (char)(ch - 'a' + 'A');
    if (ch == 'O') return 0;
    if (ch == 'I' || ch == 'L') return 1;
    if (ch >= '0' && ch <= '9') return ch - '0';
    static const char* kHigh = "ABCDEFGHJKMNPQRSTVWXYZ";
    for (int i = 0; kHigh[i] != 0; ++i) if (kHigh[i] == ch) return 10 + i;
    return -1;
}
bool b32_crockford_decode_d60(const char* in, size_t n, uint8_t* out, size_t cap, size_t* out_len) {
    uint32_t buf = 0;
    int bits = 0;
    size_t w = 0;
    for (size_t i = 0; i < n; ++i) {
        if (in[i] == '-') continue;
        int v = crock_val(in[i]);
        if (v < 0) return false;
        buf = (buf << 5) | (uint32_t)v;
        bits += 5;
        if (bits >= 8) {
            if (w >= cap) return false;
            bits -= 8;
            out[w++] = (uint8_t)((buf >> bits) & 0xffU);
        }
    }
    *out_len = w;
    return true;
}
