#ifndef OVERFLOW_CHECKED_ARITH_D56_TYPES_H
#define OVERFLOW_CHECKED_ARITH_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int ok;
    uint64_t value;
} checked_u64_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} overflow_checked_arith_d56_meta_t;

#endif /* OVERFLOW_CHECKED_ARITH_D56_TYPES_H */
