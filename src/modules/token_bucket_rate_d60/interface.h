#ifndef TOKEN_BUCKET_RATE_D60_INTERFACE_H
#define TOKEN_BUCKET_RATE_D60_INTERFACE_H

#include "types.h"
#include "errors.h"

void tb_init_d60(token_bucket_t* tb, uint64_t cap, uint64_t rate_per_sec, uint64_t now_ns);
bool tb_allow_d60(token_bucket_t* tb, uint64_t now_ns, uint64_t cost);

token_bucket_rate_d60_err_t token_bucket_rate_d60_validate_len(size_t n);
uint64_t token_bucket_rate_d60_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t token_bucket_rate_d60_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
token_bucket_rate_d60_err_t token_bucket_rate_d60_verify_guard(bool cond);

#endif /* TOKEN_BUCKET_RATE_D60_INTERFACE_H */
