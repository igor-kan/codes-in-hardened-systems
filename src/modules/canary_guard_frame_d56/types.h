#ifndef CANARY_GUARD_FRAME_D56_TYPES_H
#define CANARY_GUARD_FRAME_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t magic_canary;
    uint64_t payload_crc;
    uint64_t data[2];
} guarded_frame_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} canary_guard_frame_d56_meta_t;

#endif /* CANARY_GUARD_FRAME_D56_TYPES_H */
