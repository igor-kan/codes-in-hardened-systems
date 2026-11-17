#ifndef CHECKED_FIXEDPOINT_Q16_TYPES_H
#define CHECKED_FIXEDPOINT_Q16_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef int32_t q16_t;
#define Q16_ONE (1LL << 16)
typedef struct {
    q16_t value;
    bool overflowed;
} q16_box_t;

#endif /* CHECKED_FIXEDPOINT_Q16_TYPES_H */
