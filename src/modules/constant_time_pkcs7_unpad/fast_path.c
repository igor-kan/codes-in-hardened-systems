#include "interface.h"
uint8_t constant_time_pkcs7_unpad_select_u8(uint8_t cond, uint8_t a, uint8_t b) {
    uint8_t mask = (uint8_t)(-(cond & 1U));
    return (uint8_t)((a & mask) | (b & (uint8_t)(~mask)));
}
