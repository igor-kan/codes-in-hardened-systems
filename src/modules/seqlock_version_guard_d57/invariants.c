#include "interface.h"

seqlock_version_guard_d57_err_t seqlock_version_guard_d57_verify_guard(bool cond) {
    if (!cond) {
        return SEQLOCK_VERSION_GUARD_D57_ERR_INVARIANT;
    }
    return SEQLOCK_VERSION_GUARD_D57_OK;
}
