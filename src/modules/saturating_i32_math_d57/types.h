#ifndef SATURATING_I32_MATH_D57_TYPES_H
#define SATURATING_I32_MATH_D57_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int32_t clamped;
    int saturated;
} sat_i32_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} saturating_i32_math_d57_meta_t;

#endif /* SATURATING_I32_MATH_D57_TYPES_H */
