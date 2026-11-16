#ifndef CHECKED_I64_MUL_DIV_TYPES_H
#define CHECKED_I64_MUL_DIV_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <limits.h>
typedef struct {
    int64_t value;
    bool overflowed;
} checked_i64_result_t;

#endif /* CHECKED_I64_MUL_DIV_TYPES_H */
