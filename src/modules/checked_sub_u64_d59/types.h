#ifndef CHECKED_SUB_U64_D59_TYPES_H
#define CHECKED_SUB_U64_D59_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int ok;
    uint64_t val;
} sub_res_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} checked_sub_u64_d59_meta_t;

#endif /* CHECKED_SUB_U64_D59_TYPES_H */
