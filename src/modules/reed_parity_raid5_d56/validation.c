#include "interface.h"

reed_parity_raid5_d56_err_t reed_parity_raid5_d56_validate_len(size_t n) {
    if (n == 0) {
        return REED_PARITY_RAID5_D56_ERR_INVALID;
    }
    return REED_PARITY_RAID5_D56_OK;
}
