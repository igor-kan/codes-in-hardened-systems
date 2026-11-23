#ifndef RATE_TOKEN_INT_D58_TYPES_H
#define RATE_TOKEN_INT_D58_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t credits;
    uint64_t max_credits;
    uint64_t rate_per_tick;
    uint64_t last_tick;
} int_bucket_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} rate_token_int_d58_meta_t;

#endif /* RATE_TOKEN_INT_D58_TYPES_H */
