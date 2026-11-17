#ifndef CONSTANT_TIME_UTF8_NORM_TYPES_H
#define CONSTANT_TIME_UTF8_NORM_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    bool valid;
    size_t codepoints;
    size_t first_bad_offset;
} utf8_audit_t;

#endif /* CONSTANT_TIME_UTF8_NORM_TYPES_H */
