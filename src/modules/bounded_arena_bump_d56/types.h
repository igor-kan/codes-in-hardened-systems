#ifndef BOUNDED_ARENA_BUMP_D56_TYPES_H
#define BOUNDED_ARENA_BUMP_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t cap;
    size_t used;
    uint8_t *base;
} bump_arena_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} bounded_arena_bump_d56_meta_t;

#endif /* BOUNDED_ARENA_BUMP_D56_TYPES_H */
