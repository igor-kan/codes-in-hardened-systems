#ifndef CANARY_XOR_RING_D59_INTERFACE_H
#define CANARY_XOR_RING_D59_INTERFACE_H

#include "types.h"
#include "errors.h"

sealed_slot_t seal_slot(uint64_t v, uint64_t cookie);
int unseal_slot(sealed_slot_t s, uint64_t cookie, uint64_t *out);

canary_xor_ring_d59_err_t canary_xor_ring_d59_validate_len(size_t n);
uint64_t canary_xor_ring_d59_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t canary_xor_ring_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
canary_xor_ring_d59_err_t canary_xor_ring_d59_verify_guard(bool cond);

#endif /* CANARY_XOR_RING_D59_INTERFACE_H */
