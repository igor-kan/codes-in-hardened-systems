#ifndef FIXED_ARENA_BUMP_GUARD_TYPES_H
#define FIXED_ARENA_BUMP_GUARD_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define GUARD_CANARY_U64 0xDEADBEEFCAFEBABEULL
typedef struct {
    uint8_t* base;
    size_t cap;
    size_t offset;
    size_t alloc_count;
} guarded_arena_t;

#endif /* FIXED_ARENA_BUMP_GUARD_TYPES_H */
