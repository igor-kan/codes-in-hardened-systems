#ifndef CT_U64_COMPARE_D60_TYPES_H
#define CT_U64_COMPARE_D60_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint32_t match_flag;
    uint32_t len_checked;
} ct_cmp_res_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} ct_u64_compare_d60_meta_t;

#endif /* CT_U64_COMPARE_D60_TYPES_H */
