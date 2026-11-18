#ifndef SIPHASH13_KEYED_COOKIE_TYPES_H
#define SIPHASH13_KEYED_COOKIE_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t k0;
    uint64_t k1;
} cookie_key_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} siphash13_keyed_cookie_meta_t;

#endif /* SIPHASH13_KEYED_COOKIE_TYPES_H */
