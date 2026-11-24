#ifndef BIT_PARITY_ECC_D59_INTERFACE_H
#define BIT_PARITY_ECC_D59_INTERFACE_H

#include "types.h"
#include "errors.h"

void grid_compute_par(const uint8_t grid[4][4], uint8_t row_p[4], uint8_t col_p[4]);
int grid_correct_bit(uint8_t grid[4][4], const uint8_t row_p[4], const uint8_t col_p[4]);

bit_parity_ecc_d59_err_t bit_parity_ecc_d59_validate_len(size_t n);
uint64_t bit_parity_ecc_d59_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t bit_parity_ecc_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
bit_parity_ecc_d59_err_t bit_parity_ecc_d59_verify_guard(bool cond);

#endif /* BIT_PARITY_ECC_D59_INTERFACE_H */
