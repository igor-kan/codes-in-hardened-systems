#ifndef UTF8_DFA_STRICT_VALID_C_TYPES_H
#define UTF8_DFA_STRICT_VALID_C_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    bool valid;
    size_t error_offset;
} utf8_check_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} utf8_dfa_strict_valid_c_meta_t;

#endif /* UTF8_DFA_STRICT_VALID_C_TYPES_H */
