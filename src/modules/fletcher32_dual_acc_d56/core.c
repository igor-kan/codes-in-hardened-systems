#include "interface.h"
#include <math.h>
#include <string.h>

uint32_t fletcher32_words(const uint16_t *words, size_t n) {
    uint32_t c0 = 0;
    uint32_t c1 = 0;
    size_t i = 0;
    while (i < n) {
        size_t blk = n - i;
        if (blk > 359) blk = 359;
        for (size_t k = 0; k < blk; ++k) {
            c0 += words[i + k];
            c1 += c0;
        }
        c0 = (c0 & 0xFFFFu) + (c0 >> 16);
        c1 = (c1 & 0xFFFFu) + (c1 >> 16);
        i += blk;
    }
    c0 = (c0 & 0xFFFFu) + (c0 >> 16);
    c1 = (c1 & 0xFFFFu) + (c1 >> 16);
    return (c1 << 16) | c0;
}
