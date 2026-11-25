#ifndef BASE32_CROCKFORD_D60_TYPES_H
#define BASE32_CROCKFORD_D60_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t chars;
    size_t bytes;
} b32_span_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} base32_crockford_d60_meta_t;

#endif /* BASE32_CROCKFORD_D60_TYPES_H */
