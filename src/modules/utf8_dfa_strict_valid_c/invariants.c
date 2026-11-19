#include "interface.h"

utf8_dfa_strict_valid_c_err_t utf8_dfa_strict_valid_c_verify_guard(bool cond) {
    if (!cond) {
        return UTF8_DFA_STRICT_VALID_C_ERR_INVARIANT;
    }
    return UTF8_DFA_STRICT_VALID_C_OK;
}
