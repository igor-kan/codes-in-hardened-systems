#include "interface.h"

utf8_audit_t utf8_strict_validate(const uint8_t* data, size_t len) {
    if (len > 0 && !data) return (utf8_audit_t){false, 0, 0};
    size_t i = 0, cps = 0;
    while (i < len) {
        uint8_t b0 = data[i];
        if (b0 <= 0x7FU) {
            ++i; ++cps;
        } else if (b0 >= 0xC2U && b0 <= 0xDFU) {
            if (i + 1 >= len || (data[i + 1] & 0xC0U) != 0x80U) return (utf8_audit_t){false, cps, i};
            i += 2; ++cps;
        } else if (b0 >= 0xE0U && b0 <= 0xEFU) {
            if (i + 2 >= len || (data[i + 1] & 0xC0U) != 0x80U || (data[i + 2] & 0xC0U) != 0x80U) {
                return (utf8_audit_t){false, cps, i};
            }
            if (b0 == 0xE0U && data[i + 1] < 0xA0U) return (utf8_audit_t){false, cps, i};
            if (b0 == 0xEDU && data[i + 1] > 0x9FU) return (utf8_audit_t){false, cps, i};
            i += 3; ++cps;
        } else if (b0 >= 0xF0U && b0 <= 0xF4U) {
            if (i + 3 >= len || (data[i + 1] & 0xC0U) != 0x80U ||
                (data[i + 2] & 0xC0U) != 0x80U || (data[i + 3] & 0xC0U) != 0x80U) {
                return (utf8_audit_t){false, cps, i};
            }
            if (b0 == 0xF0U && data[i + 1] < 0x90U) return (utf8_audit_t){false, cps, i};
            if (b0 == 0xF4U && data[i + 1] > 0x8FU) return (utf8_audit_t){false, cps, i};
            i += 4; ++cps;
        } else {
            return (utf8_audit_t){false, cps, i};
        }
    }
    return (utf8_audit_t){true, cps, len};
}
