#ifndef REED_PARITY_RAID5_D56_INTERFACE_H
#define REED_PARITY_RAID5_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

void raid_compute_parity(const uint8_t *blocks, size_t n_data, size_t len, uint8_t *parity);
void raid_recover_erasure(uint8_t *blocks, const uint8_t *parity, size_t n_data, size_t len, size_t failed_idx);

reed_parity_raid5_d56_err_t reed_parity_raid5_d56_validate_len(size_t n);
uint64_t reed_parity_raid5_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t reed_parity_raid5_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
reed_parity_raid5_d56_err_t reed_parity_raid5_d56_verify_guard(bool cond);

#endif /* REED_PARITY_RAID5_D56_INTERFACE_H */
