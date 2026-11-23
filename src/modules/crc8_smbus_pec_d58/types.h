#ifndef CRC8_SMBUS_PEC_D58_TYPES_H
#define CRC8_SMBUS_PEC_D58_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint8_t pec;
    int ok;
} pec_status_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} crc8_smbus_pec_d58_meta_t;

#endif /* CRC8_SMBUS_PEC_D58_TYPES_H */
