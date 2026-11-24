#ifndef SAFE_SLICE_BOUNDS_D59_TYPES_H
#define SAFE_SLICE_BOUNDS_D59_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t off;
    size_t len;
} safe_span_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} safe_slice_bounds_d59_meta_t;

#endif /* SAFE_SLICE_BOUNDS_D59_TYPES_H */
