#ifndef CRC16_CCITT_FALSE_D57_TYPES_H
#define CRC16_CCITT_FALSE_D57_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint16_t crc;
    size_t bytes;
} crc16_report_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} crc16_ccitt_false_d57_meta_t;

#endif /* CRC16_CCITT_FALSE_D57_TYPES_H */
