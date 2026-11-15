#include "interface.h"
#include <string.h>
path_canonical_jail_err_t path_canonical_jail_batch(const char** paths, size_t n, uint32_t* rejected) {
    if (!paths || !rejected) return PATH_CANONICAL_JAIL_ERR_NULL;
    uint32_t bad = 0;
    for (size_t i = 0; i < n; ++i) {
        path_jail_result_t r;
        if (path_canonical_jail_normalize(paths[i], strlen(paths[i]), &r) != PATH_CANONICAL_JAIL_OK) bad++;
    }
    *rejected = bad;
    return PATH_CANONICAL_JAIL_OK;
}
