#ifndef CONSTANT_TIME_PKCS7_UNPAD_TYPES_H
#define CONSTANT_TIME_PKCS7_UNPAD_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define PKCS7_MAX_BLOCK 64U
typedef struct {
    size_t block_size;
    size_t unpadded_len;
    bool valid;
} pkcs7_probe_t;

#endif /* CONSTANT_TIME_PKCS7_UNPAD_TYPES_H */
