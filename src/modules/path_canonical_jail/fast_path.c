#include "interface.h"
#include <string.h>
path_canonical_jail_err_t path_canonical_jail_normalize_fast(const char* raw, size_t raw_len, char* out, size_t cap, size_t* out_len) {
    path_jail_result_t r;
    path_canonical_jail_err_t e = path_canonical_jail_normalize(raw, raw_len, &r);
    if (e != PATH_CANONICAL_JAIL_OK) return e;
    if (r.len + 1 > cap) return PATH_CANONICAL_JAIL_ERR_BOUNDS;
    memcpy(out, r.normalized, r.len + 1);
    *out_len = r.len;
    return PATH_CANONICAL_JAIL_OK;
}
