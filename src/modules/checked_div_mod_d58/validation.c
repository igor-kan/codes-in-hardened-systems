#include "interface.h"

checked_div_mod_d58_err_t checked_div_mod_d58_validate_len(size_t n) {
    if (n == 0) {
        return CHECKED_DIV_MOD_D58_ERR_INVALID;
    }
    return CHECKED_DIV_MOD_D58_OK;
}
