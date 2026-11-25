#ifndef COBS_PACKET_CODEC_D60_TYPES_H
#define COBS_PACKET_CODEC_D60_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t encoded_len;
    bool zero_free;
} cobs_meta_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} cobs_packet_codec_d60_meta_t;

#endif /* COBS_PACKET_CODEC_D60_TYPES_H */
