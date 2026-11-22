#ifndef VAR_U64_BOUNDS_CHK_D57_TYPES_H
#define VAR_U64_BOUNDS_CHK_D57_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t total_bytes;
    int overflowed;
} alloc_size_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} var_u64_bounds_chk_d57_meta_t;

#endif /* VAR_U64_BOUNDS_CHK_D57_TYPES_H */
