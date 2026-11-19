#include "interface.h"
#include <math.h>
#include <string.h>

bool strict_utf8_valid(const uint8_t* s, size_t n) {
    size_t i = 0;
    while (i < n) {
        uint8_t b0 = s[i];
        if (b0 <= 0x7fU) { ++i; continue; }
        size_t need = 0;
        uint32_t cp = 0;
        if ((b0 & 0xe0U) == 0xc0U) { need = 1; cp = b0 & 0x1fU; if (b0 < 0xc2U) return false; }
        else if ((b0 & 0xf0U) == 0xe0U) { need = 2; cp = b0 & 0x0fU; }
        else if ((b0 & 0xf8U) == 0xf0U && b0 <= 0xf4U) { need = 3; cp = b0 & 0x07U; }
        else return false;
        if (i + need >= n) return false;
        for (size_t k = 1; k <= need; ++k) {
            uint8_t bk = s[i + k];
            if ((bk & 0xc0U) != 0x80U) return false;
            cp = (cp << 6) | (bk & 0x3fU);
        }
        if ((need == 2 && cp < 0x800U) || (need == 3 && (cp < 0x10000U || cp > 0x10ffffU))) return false;
        if (cp >= 0xd800U && cp <= 0xdfffU) return false;
        i += need + 1;
    }
    return true;
}
