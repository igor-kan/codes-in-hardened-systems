#include "interface.h"

siphash13_keyed_cookie_err_t siphash13_keyed_cookie_validate_len(size_t n) {
    if (n == 0) {
        return SIPHASH13_KEYED_COOKIE_ERR_INVALID;
    }
    return SIPHASH13_KEYED_COOKIE_OK;
}
