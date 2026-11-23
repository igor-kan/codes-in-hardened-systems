#ifndef ADLER32_ZLIB_D58_INTERFACE_H
#define ADLER32_ZLIB_D58_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t adler32_compute(const uint8_t *buf, size_t len);

adler32_zlib_d58_err_t adler32_zlib_d58_validate_len(size_t n);
uint64_t adler32_zlib_d58_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t adler32_zlib_d58_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
adler32_zlib_d58_err_t adler32_zlib_d58_verify_guard(bool cond);

#endif /* ADLER32_ZLIB_D58_INTERFACE_H */
