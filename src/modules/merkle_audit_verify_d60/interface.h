#ifndef MERKLE_AUDIT_VERIFY_D60_INTERFACE_H
#define MERKLE_AUDIT_VERIFY_D60_INTERFACE_H

#include "types.h"
#include "errors.h"

uint64_t merkle_hash_leaf_d60(uint64_t val);
uint64_t merkle_hash_node_d60(uint64_t left, uint64_t right);
bool merkle_verify_proof_d60(uint64_t root, uint64_t leaf_val, const merkle_proof_t* pr);

merkle_audit_verify_d60_err_t merkle_audit_verify_d60_validate_len(size_t n);
uint64_t merkle_audit_verify_d60_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t merkle_audit_verify_d60_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
merkle_audit_verify_d60_err_t merkle_audit_verify_d60_verify_guard(bool cond);

#endif /* MERKLE_AUDIT_VERIFY_D60_INTERFACE_H */
