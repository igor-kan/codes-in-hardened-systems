#ifndef BOUNDED_ARENA_SCRATCH_TYPES_H
#define BOUNDED_ARENA_SCRATCH_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define ARENA_CANARY 0xDEADBEEFCAFEBABEULL
typedef struct {
    uint8_t* base;
    size_t cap;
    size_t offset;
    uint64_t* trailer_canary;
} guarded_arena_t;

#endif /* BOUNDED_ARENA_SCRATCH_TYPES_H */
