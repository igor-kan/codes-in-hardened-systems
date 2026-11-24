#ifndef BIT_PARITY_ECC_D59_TYPES_H
#define BIT_PARITY_ECC_D59_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint8_t row_p;
    uint8_t col_p;
} grid_parity_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} bit_parity_ecc_d59_meta_t;

#endif /* BIT_PARITY_ECC_D59_TYPES_H */
