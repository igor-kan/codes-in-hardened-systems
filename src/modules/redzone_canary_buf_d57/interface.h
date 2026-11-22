#ifndef REDZONE_CANARY_BUF_D57_INTERFACE_H
#define REDZONE_CANARY_BUF_D57_INTERFACE_H

#include "types.h"
#include "errors.h"

void rz32_init(rz_buf32_t *r);
int rz32_write(rz_buf32_t *r, size_t off, uint8_t val);
int rz32_check(const rz_buf32_t *r);

redzone_canary_buf_d57_err_t redzone_canary_buf_d57_validate_len(size_t n);
uint64_t redzone_canary_buf_d57_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t redzone_canary_buf_d57_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
redzone_canary_buf_d57_err_t redzone_canary_buf_d57_verify_guard(bool cond);

#endif /* REDZONE_CANARY_BUF_D57_INTERFACE_H */
