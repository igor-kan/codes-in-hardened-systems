#ifndef MONOTONIC_RATE_WINDOW_SAFE_INTERFACE_H
#define MONOTONIC_RATE_WINDOW_SAFE_INTERFACE_H

#include "types.h"
#include "errors.h"

monotonic_rate_window_safe_err_t slim_init(safe_limiter_t* l, uint64_t cap, uint64_t rate_per_sec, uint64_t now_ns);
bool slim_allow(safe_limiter_t* l, uint64_t now_ns, uint64_t cost);
monotonic_rate_window_safe_err_t slim_validate(const safe_limiter_t* l);
void slim_refill(safe_limiter_t* l, uint64_t now_ns);
monotonic_rate_window_safe_err_t slim_mt_sim(size_t n_threads);
monotonic_rate_window_safe_err_t slim_verify_invariants(const safe_limiter_t* l);

#endif /* MONOTONIC_RATE_WINDOW_SAFE_INTERFACE_H */
