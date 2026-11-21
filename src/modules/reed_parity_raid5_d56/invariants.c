#include "interface.h"

reed_parity_raid5_d56_err_t reed_parity_raid5_d56_verify_guard(bool cond) {
    if (!cond) {
        return REED_PARITY_RAID5_D56_ERR_INVARIANT;
    }
    return REED_PARITY_RAID5_D56_OK;
}
