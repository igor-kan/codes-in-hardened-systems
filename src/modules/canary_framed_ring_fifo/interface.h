#ifndef CANARY_FRAMED_RING_FIFO_INTERFACE_H
#define CANARY_FRAMED_RING_FIFO_INTERFACE_H

#include "types.h"
#include "errors.h"

void cring_init(canary_ring_t* q);
bool cring_push(canary_ring_t* q, uint64_t v);
bool cring_pop(canary_ring_t* q, uint64_t* out);

canary_framed_ring_fifo_err_t canary_framed_ring_fifo_validate_len(size_t n);
uint64_t canary_framed_ring_fifo_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t canary_framed_ring_fifo_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
canary_framed_ring_fifo_err_t canary_framed_ring_fifo_verify_guard(bool cond);

#endif /* CANARY_FRAMED_RING_FIFO_INTERFACE_H */
