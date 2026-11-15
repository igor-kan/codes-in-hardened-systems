#ifndef UTF8_OVERLONG_SANITIZER_TYPES_H
#define UTF8_OVERLONG_SANITIZER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t codepoints;
    size_t first_bad_offset;
    bool valid;
} utf8_san_report_t;

#endif /* UTF8_OVERLONG_SANITIZER_TYPES_H */
