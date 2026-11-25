#ifndef SLIP_FRAME_CODEC_D60_TYPES_H
#define SLIP_FRAME_CODEC_D60_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define SLIP_END 0xc0U
#define SLIP_ESC 0xdbU
#define SLIP_ESC_END 0xdcU
#define SLIP_ESC_ESC 0xddU
typedef struct {
    size_t len;
    bool valid;
} slip_status_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} slip_frame_codec_d60_meta_t;

#endif /* SLIP_FRAME_CODEC_D60_TYPES_H */
