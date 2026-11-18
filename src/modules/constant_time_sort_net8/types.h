#ifndef CONSTANT_TIME_SORT_NET8_TYPES_H
#define CONSTANT_TIME_SORT_NET8_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int64_t v[8];
} net8_vec_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} constant_time_sort_net8_meta_t;

#endif /* CONSTANT_TIME_SORT_NET8_TYPES_H */
