#ifndef CONSTANT_TIME_UTF8_NORM_INTERFACE_H
#define CONSTANT_TIME_UTF8_NORM_INTERFACE_H

#include "types.h"
#include "errors.h"

utf8_audit_t utf8_strict_validate(const uint8_t* data, size_t len);
constant_time_utf8_norm_err_t utf8_validate_args(const uint8_t* data, size_t len);
bool utf8_fast_ascii_prefix(const uint8_t* data, size_t len, size_t* out_ascii_len);
void utf8_parallel_audit(const uint8_t* a, size_t na, const uint8_t* b, size_t nb, utf8_audit_t out[2]);
constant_time_utf8_norm_err_t utf8_verify_rejected_vectors(void);

#endif /* CONSTANT_TIME_UTF8_NORM_INTERFACE_H */
