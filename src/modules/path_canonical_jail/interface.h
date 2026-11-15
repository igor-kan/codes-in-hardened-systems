#ifndef PATH_CANONICAL_JAIL_INTERFACE_H
#define PATH_CANONICAL_JAIL_INTERFACE_H

#include "types.h"
#include "errors.h"

path_canonical_jail_err_t path_canonical_jail_normalize(const char* raw, size_t raw_len, path_jail_result_t* out);
path_canonical_jail_err_t path_canonical_jail_validate_chars(const char* raw, size_t raw_len);
path_canonical_jail_err_t path_canonical_jail_normalize_fast(const char* raw, size_t raw_len, char* out, size_t cap, size_t* out_len);
path_canonical_jail_err_t path_canonical_jail_batch(const char** paths, size_t n, uint32_t* rejected);
path_canonical_jail_err_t path_canonical_jail_verify_containment(const path_jail_result_t* res);

#endif /* PATH_CANONICAL_JAIL_INTERFACE_H */
