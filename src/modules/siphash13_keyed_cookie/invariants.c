#include "interface.h"

siphash13_keyed_cookie_err_t siphash13_keyed_cookie_verify_guard(bool cond) {
    if (!cond) {
        return SIPHASH13_KEYED_COOKIE_ERR_INVARIANT;
    }
    return SIPHASH13_KEYED_COOKIE_OK;
}
