#ifndef CRC16_MODBUS_C11_D59_TYPES_H
#define CRC16_MODBUS_C11_D59_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint16_t crc;
    int valid;
} modbus_crc_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} crc16_modbus_c11_d59_meta_t;

#endif /* CRC16_MODBUS_C11_D59_TYPES_H */
