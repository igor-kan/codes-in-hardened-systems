#ifndef SAFE_BASE64URL_STRICT_INTERFACE_H
#define SAFE_BASE64URL_STRICT_INTERFACE_H

#include "types.h"
#include "errors.h"

safe_base64url_strict_err_t b64u_encode(const uint8_t* src, size_t len, char* dst, size_t dst_cap, size_t* out_len);
safe_base64url_strict_err_t b64u_decode_strict(const char* src, size_t len, uint8_t* dst, size_t dst_cap, size_t* out_len);
safe_base64url_strict_err_t b64u_validate_len(size_t encoded_len);
safe_base64url_strict_err_t b64u_batch_roundtrip_mt(const uint8_t** bufs, const size_t* lens, size_t count, size_t num_threads);
safe_base64url_strict_err_t b64u_verify_invariants(const uint8_t* data, size_t len);

#endif /* SAFE_BASE64URL_STRICT_INTERFACE_H */
