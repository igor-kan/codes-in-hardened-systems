#include "interface.h"
#include <math.h>
#include <string.h>

uint8_t crc8_smbus(const uint8_t *buf, size_t len) {
    uint8_t crc = 0;
    for (size_t i = 0; i < len; ++i) {
        crc ^= buf[i];
        for (int b = 0; b < 8; ++b) {
            if (crc & 0x80u) crc = (uint8_t)((crc << 1) ^ 0x07u);
            else crc <<= 1;
        }
    }
    return crc;
}
