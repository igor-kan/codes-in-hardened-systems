#ifndef DOUBLE_FENCE_POOL_D59_INTERFACE_H
#define DOUBLE_FENCE_POOL_D59_INTERFACE_H

#include "types.h"
#include "errors.h"

void gp_init(gen_pool_t *p);
int gp_alloc(gen_pool_t *p, gen_handle_t *h);
int gp_valid(const gen_pool_t *p, gen_handle_t h);
int gp_free(gen_pool_t *p, gen_handle_t h);

double_fence_pool_d59_err_t double_fence_pool_d59_validate_len(size_t n);
uint64_t double_fence_pool_d59_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t double_fence_pool_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
double_fence_pool_d59_err_t double_fence_pool_d59_verify_guard(bool cond);

#endif /* DOUBLE_FENCE_POOL_D59_INTERFACE_H */
