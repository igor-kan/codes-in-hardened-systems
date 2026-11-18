#ifndef CHECKED_VARINT_ZIGZAG_C_TYPES_H
#define CHECKED_VARINT_ZIGZAG_C_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int64_t value;
    size_t bytes_read;
} zigzag_dec_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} checked_varint_zigzag_c_meta_t;

#endif /* CHECKED_VARINT_ZIGZAG_C_TYPES_H */
