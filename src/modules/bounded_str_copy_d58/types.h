#ifndef BOUNDED_STR_COPY_D58_TYPES_H
#define BOUNDED_STR_COPY_D58_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t copied;
    int truncated;
} bounded_copy_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} bounded_str_copy_d58_meta_t;

#endif /* BOUNDED_STR_COPY_D58_TYPES_H */
