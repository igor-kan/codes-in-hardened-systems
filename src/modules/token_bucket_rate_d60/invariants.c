#include "interface.h"

token_bucket_rate_d60_err_t token_bucket_rate_d60_verify_guard(bool cond) {
    if (!cond) {
        return TOKEN_BUCKET_RATE_D60_ERR_INVARIANT;
    }
    return TOKEN_BUCKET_RATE_D60_OK;
}
