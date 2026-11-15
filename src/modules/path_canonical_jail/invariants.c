#include "interface.h"
#include <string.h>
path_canonical_jail_err_t path_canonical_jail_verify_containment(const path_jail_result_t* res) {
    if (!res) return PATH_CANONICAL_JAIL_ERR_NULL;
    if (res->len > 0 && res->normalized[0] == '/') return PATH_CANONICAL_JAIL_ERR_INVARIANT;
    if (strstr(res->normalized, "..") != NULL) return PATH_CANONICAL_JAIL_ERR_INVARIANT;
    return PATH_CANONICAL_JAIL_OK;
}
