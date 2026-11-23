#ifndef CHECKED_DIV_MOD_D58_TYPES_H
#define CHECKED_DIV_MOD_D58_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int64_t quot;
    int64_t rem;
} divmod64_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} checked_div_mod_d58_meta_t;

#endif /* CHECKED_DIV_MOD_D58_TYPES_H */
