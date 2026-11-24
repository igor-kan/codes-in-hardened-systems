#include "interface.h"
#include <math.h>
#include <string.h>

uint16_t crc16_modbus(const uint8_t *buf, size_t len) {
    uint16_t crc = 0xFFFFu;
    for (size_t i = 0; i < len; ++i) {
        crc ^= (uint16_t)buf[i];
        for (int b = 0; b < 8; ++b) {
            if (crc & 1u) crc = (uint16_t)((crc >> 1) ^ 0xA001u);
            else crc >>= 1;
        }
    }
    return crc;
}
