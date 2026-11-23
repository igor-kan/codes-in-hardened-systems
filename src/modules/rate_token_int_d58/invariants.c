#include "interface.h"

rate_token_int_d58_err_t rate_token_int_d58_verify_guard(bool cond) {
    if (!cond) {
        return RATE_TOKEN_INT_D58_ERR_INVARIANT;
    }
    return RATE_TOKEN_INT_D58_OK;
}
