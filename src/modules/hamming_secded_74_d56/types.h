#ifndef HAMMING_SECDED_74_D56_TYPES_H
#define HAMMING_SECDED_74_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    int status;
    uint8_t nibble;
} secded_decode_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} hamming_secded_74_d56_meta_t;

#endif /* HAMMING_SECDED_74_D56_TYPES_H */
