#include "interface.h"

monotonic_epoch_fencing_err_t monotonic_epoch_fencing_verify_guard(bool cond) {
    if (!cond) {
        return MONOTONIC_EPOCH_FENCING_ERR_INVARIANT;
    }
    return MONOTONIC_EPOCH_FENCING_OK;
}
