#ifndef SIPHASH13_KEYED_COOKIE_INTERFACE_H
#define SIPHASH13_KEYED_COOKIE_INTERFACE_H

#include "types.h"
#include "errors.h"

uint64_t sipcookie_make(cookie_key_t k, uint64_t client_id, uint32_t ts_slot);
bool sipcookie_verify(cookie_key_t k, uint64_t client_id, uint32_t now_slot, uint64_t cookie);

siphash13_keyed_cookie_err_t siphash13_keyed_cookie_validate_len(size_t n);
uint64_t siphash13_keyed_cookie_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t siphash13_keyed_cookie_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
siphash13_keyed_cookie_err_t siphash13_keyed_cookie_verify_guard(bool cond);

#endif /* SIPHASH13_KEYED_COOKIE_INTERFACE_H */
