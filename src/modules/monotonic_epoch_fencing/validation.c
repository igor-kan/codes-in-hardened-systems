#include "interface.h"

monotonic_epoch_fencing_err_t monotonic_epoch_fencing_validate_len(size_t n) {
    if (n == 0) {
        return MONOTONIC_EPOCH_FENCING_ERR_INVALID;
    }
    return MONOTONIC_EPOCH_FENCING_OK;
}
