#ifndef REDZONE_CANARY_BUF_D57_TYPES_H
#define REDZONE_CANARY_BUF_D57_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t head_guard;
    uint8_t payload[32];
    uint64_t tail_guard;
} rz_buf32_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} redzone_canary_buf_d57_meta_t;

#endif /* REDZONE_CANARY_BUF_D57_TYPES_H */
