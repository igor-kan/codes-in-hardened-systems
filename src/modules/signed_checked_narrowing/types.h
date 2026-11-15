#ifndef SIGNED_CHECKED_NARROWING_TYPES_H
#define SIGNED_CHECKED_NARROWING_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <limits.h>
typedef struct {
    size_t aligned_addr;
    bool overflowed;
} checked_align_t;

#endif /* SIGNED_CHECKED_NARROWING_TYPES_H */
