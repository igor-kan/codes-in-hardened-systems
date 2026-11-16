#ifndef CRC32_JOURNAL_HEADER_TYPES_H
#define CRC32_JOURNAL_HEADER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define JHDR_MAGIC 0x4A524E4CU
#define JHDR_SIZE 20U
typedef struct {
    uint32_t magic;
    uint16_t version;
    uint16_t flags;
    uint32_t payload_len;
    uint32_t payload_crc;
    uint32_t header_crc;
} jhdr_t;

#endif /* CRC32_JOURNAL_HEADER_TYPES_H */
