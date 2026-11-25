#ifndef TOKEN_BUCKET_RATE_D60_TYPES_H
#define TOKEN_BUCKET_RATE_D60_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t tokens;
    uint64_t capacity;
    uint64_t rate_per_sec;
    uint64_t last_ns;
} token_bucket_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} token_bucket_rate_d60_meta_t;

#endif /* TOKEN_BUCKET_RATE_D60_TYPES_H */
