#include "interface.h"

seqlock_version_guard_d57_err_t seqlock_version_guard_d57_validate_len(size_t n) {
    if (n == 0) {
        return SEQLOCK_VERSION_GUARD_D57_ERR_INVALID;
    }
    return SEQLOCK_VERSION_GUARD_D57_OK;
}
