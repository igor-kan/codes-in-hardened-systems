#ifndef JOURNAL_WAL_TORN_GUARD_INTERFACE_H
#define JOURNAL_WAL_TORN_GUARD_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t wal_fletcher32(const uint8_t* data, size_t len);
void wal_seal_frame(wal_frame_t* f, uint64_t lsn, const uint8_t* payload, uint32_t len);
bool wal_verify_frame(const wal_frame_t* f);

journal_wal_torn_guard_err_t journal_wal_torn_guard_validate_len(size_t n);
uint64_t journal_wal_torn_guard_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t journal_wal_torn_guard_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
journal_wal_torn_guard_err_t journal_wal_torn_guard_verify_guard(bool cond);

#endif /* JOURNAL_WAL_TORN_GUARD_INTERFACE_H */
