#ifndef CONSTANT_TIME_BCD_CODEC_TYPES_H
#define CONSTANT_TIME_BCD_CODEC_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t value;
    uint32_t valid_mask;
} bcd_decode_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} constant_time_bcd_codec_meta_t;

#endif /* CONSTANT_TIME_BCD_CODEC_TYPES_H */
