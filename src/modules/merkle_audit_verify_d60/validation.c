#include "interface.h"

merkle_audit_verify_d60_err_t merkle_audit_verify_d60_validate_len(size_t n) {
    if (n == 0) {
        return MERKLE_AUDIT_VERIFY_D60_ERR_INVALID;
    }
    return MERKLE_AUDIT_VERIFY_D60_OK;
}
