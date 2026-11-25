#include "interface.h"

token_bucket_rate_d60_err_t token_bucket_rate_d60_validate_len(size_t n) {
    if (n == 0) {
        return TOKEN_BUCKET_RATE_D60_ERR_INVALID;
    }
    return TOKEN_BUCKET_RATE_D60_OK;
}
