#ifndef SAFE_ENV_KV_SANITIZER_INTERFACE_H
#define SAFE_ENV_KV_SANITIZER_INTERFACE_H

#include "types.h"
#include "errors.h"

kv_parse_result_t kv_parse_strict(const char* rec, size_t len);
safe_env_kv_sanitizer_err_t kv_validate_char_set(const char* val, size_t vlen);
bool kv_fast_is_upper_ident(const char* k, size_t klen);
void kv_parallel_filter(const char** recs, const size_t* lens, size_t n, int* out_ok);
safe_env_kv_sanitizer_err_t kv_verify_injection_blocked(void);

#endif /* SAFE_ENV_KV_SANITIZER_INTERFACE_H */
