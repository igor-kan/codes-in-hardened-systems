#include "interface.h"

merkle_audit_verify_d60_err_t merkle_audit_verify_d60_verify_guard(bool cond) {
    if (!cond) {
        return MERKLE_AUDIT_VERIFY_D60_ERR_INVARIANT;
    }
    return MERKLE_AUDIT_VERIFY_D60_OK;
}
