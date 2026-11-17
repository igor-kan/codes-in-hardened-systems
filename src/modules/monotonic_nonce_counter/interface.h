#ifndef MONOTONIC_NONCE_COUNTER_INTERFACE_H
#define MONOTONIC_NONCE_COUNTER_INTERFACE_H

#include "types.h"
#include "errors.h"

void replay_init(replay_window_t* rw, uint32_t epoch);
monotonic_nonce_counter_err_t replay_accept(replay_window_t* rw, uint64_t seq);
monotonic_nonce_counter_err_t replay_validate_seal(const replay_window_t* rw);
uint32_t fast_crc_seal(const replay_window_t* rw);
void parallel_epoch_checks(const replay_window_t* rw, const uint64_t* seqs, size_t n, int* out_ok);
monotonic_nonce_counter_err_t verify_anti_replay_contract(void);

#endif /* MONOTONIC_NONCE_COUNTER_INTERFACE_H */
