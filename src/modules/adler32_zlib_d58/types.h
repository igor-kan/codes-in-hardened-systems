#ifndef ADLER32_ZLIB_D58_TYPES_H
#define ADLER32_ZLIB_D58_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint32_t s1;
    uint32_t s2;
} adler32_state_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} adler32_zlib_d58_meta_t;

#endif /* ADLER32_ZLIB_D58_TYPES_H */
