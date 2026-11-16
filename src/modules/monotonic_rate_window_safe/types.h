#ifndef MONOTONIC_RATE_WINDOW_SAFE_TYPES_H
#define MONOTONIC_RATE_WINDOW_SAFE_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t tokens;
    uint64_t capacity;
    uint64_t refill_per_sec;
    uint64_t last_ns;
    uint64_t rem_ns;
} safe_limiter_t;

#endif /* MONOTONIC_RATE_WINDOW_SAFE_TYPES_H */
