#ifndef CONSTANT_TIME_MEMEQ_C11_TYPES_H
#define CONSTANT_TIME_MEMEQ_C11_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint32_t diff_acc;
    bool equal;
} ct_cmp_res_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} constant_time_memeq_c11_meta_t;

#endif /* CONSTANT_TIME_MEMEQ_C11_TYPES_H */
