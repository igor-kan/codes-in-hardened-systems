#ifndef SAFE_ENV_KV_SANITIZER_TYPES_H
#define SAFE_ENV_KV_SANITIZER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t key_len;
    size_t val_offset;
    size_t val_len;
    bool ok;
} kv_parse_result_t;

#endif /* SAFE_ENV_KV_SANITIZER_TYPES_H */
