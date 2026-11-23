#ifndef RATE_TOKEN_INT_D58_INTERFACE_H
#define RATE_TOKEN_INT_D58_INTERFACE_H

#include "types.h"
#include "errors.h"

void bucket_init(int_bucket_t *b, uint64_t max_c, uint64_t rate);
int bucket_take(int_bucket_t *b, uint64_t tick, uint64_t cost);

rate_token_int_d58_err_t rate_token_int_d58_validate_len(size_t n);
uint64_t rate_token_int_d58_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t rate_token_int_d58_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
rate_token_int_d58_err_t rate_token_int_d58_verify_guard(bool cond);

#endif /* RATE_TOKEN_INT_D58_INTERFACE_H */
