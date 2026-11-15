#ifndef SAFE_SNPRINTF_WRITER_TYPES_H
#define SAFE_SNPRINTF_WRITER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    char* buf;
    size_t cap;
    size_t len;
    bool truncated;
} safe_writer_t;

#endif /* SAFE_SNPRINTF_WRITER_TYPES_H */
