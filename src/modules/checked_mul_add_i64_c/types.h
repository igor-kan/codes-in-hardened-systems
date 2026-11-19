#ifndef CHECKED_MUL_ADD_I64_C_TYPES_H
#define CHECKED_MUL_ADD_I64_C_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int64_t value;
    bool overflowed;
} checked_i64_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} checked_mul_add_i64_c_meta_t;

#endif /* CHECKED_MUL_ADD_I64_C_TYPES_H */
