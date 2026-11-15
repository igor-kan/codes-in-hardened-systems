#include "interface.h"
#include <string.h>

path_canonical_jail_err_t path_canonical_jail_normalize(const char* raw, size_t raw_len, path_jail_result_t* out) {
    if (!raw || !out) return PATH_CANONICAL_JAIL_ERR_NULL;
    if (raw_len >= PATH_JAIL_MAX_LEN) return PATH_CANONICAL_JAIL_ERR_BOUNDS;
    path_canonical_jail_err_t cv = path_canonical_jail_validate_chars(raw, raw_len);
    if (cv != PATH_CANONICAL_JAIL_OK) return cv;

    size_t seg_starts[128], seg_lens[128], depth = 0;
    uint32_t blocked = 0;
    size_t i = 0;
    while (i < raw_len) {
        while (i < raw_len && (raw[i] == '/' || raw[i] == '\\')) i++;
        if (i >= raw_len) break;
        size_t s = i;
        while (i < raw_len && raw[i] != '/' && raw[i] != '\\') i++;
        size_t slen = i - s;
        if (slen == 1 && raw[s] == '.') continue;
        if (slen == 2 && raw[s] == '.' && raw[s + 1] == '.') {
            if (depth > 0) depth--;
            else blocked++; // Cannot escape jail root!
            continue;
        }
        if (depth >= 128) return PATH_CANONICAL_JAIL_ERR_BOUNDS;
        seg_starts[depth] = s;
        seg_lens[depth] = slen;
        depth++;
    }
    if (blocked > 0) {
        out->dotdot_blocked = blocked;
        out->normalized[0] = '\0';
        out->len = 0;
        return PATH_CANONICAL_JAIL_ERR_INVALID;
    }
    size_t pos = 0;
    for (size_t d = 0; d < depth; ++d) {
        if (d > 0) out->normalized[pos++] = '/';
        memcpy(out->normalized + pos, raw + seg_starts[d], seg_lens[d]);
        pos += seg_lens[d];
    }
    out->normalized[pos] = '\0';
    out->len = pos;
    out->dotdot_blocked = 0;
    return PATH_CANONICAL_JAIL_OK;
}
