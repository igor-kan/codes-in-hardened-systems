#ifndef UTF8_DFA_STRICT_VALID_C_INTERFACE_H
#define UTF8_DFA_STRICT_VALID_C_INTERFACE_H

#include "types.h"
#include "errors.h"

bool strict_utf8_valid(const uint8_t* s, size_t n);

utf8_dfa_strict_valid_c_err_t utf8_dfa_strict_valid_c_validate_len(size_t n);
uint64_t utf8_dfa_strict_valid_c_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t utf8_dfa_strict_valid_c_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
utf8_dfa_strict_valid_c_err_t utf8_dfa_strict_valid_c_verify_guard(bool cond);

#endif /* UTF8_DFA_STRICT_VALID_C_INTERFACE_H */
