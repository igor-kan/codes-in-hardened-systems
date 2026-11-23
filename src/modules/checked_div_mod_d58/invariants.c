#include "interface.h"

checked_div_mod_d58_err_t checked_div_mod_d58_verify_guard(bool cond) {
    if (!cond) {
        return CHECKED_DIV_MOD_D58_ERR_INVARIANT;
    }
    return CHECKED_DIV_MOD_D58_OK;
}
