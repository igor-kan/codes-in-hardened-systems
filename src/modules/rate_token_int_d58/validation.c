#include "interface.h"

rate_token_int_d58_err_t rate_token_int_d58_validate_len(size_t n) {
    if (n == 0) {
        return RATE_TOKEN_INT_D58_ERR_INVALID;
    }
    return RATE_TOKEN_INT_D58_OK;
}
