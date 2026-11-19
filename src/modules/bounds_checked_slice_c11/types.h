#ifndef BOUNDS_CHECKED_SLICE_C11_TYPES_H
#define BOUNDS_CHECKED_SLICE_C11_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    const uint8_t* ptr;
    size_t len;
} safe_span_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} bounds_checked_slice_c11_meta_t;

#endif /* BOUNDS_CHECKED_SLICE_C11_TYPES_H */
