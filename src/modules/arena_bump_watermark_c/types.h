#ifndef ARENA_BUMP_WATERMARK_C_TYPES_H
#define ARENA_BUMP_WATERMARK_C_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define ARENA_CAP 256
#define ARENA_TAIL 0xBEEFCAFEE1234567ULL
typedef struct {
    uint8_t buf[ARENA_CAP];
    size_t offset;
    size_t high_water;
    uint64_t tail_canary;
} safe_arena_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} arena_bump_watermark_c_meta_t;

#endif /* ARENA_BUMP_WATERMARK_C_TYPES_H */
