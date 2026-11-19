#include "interface.h"

utf8_dfa_strict_valid_c_err_t utf8_dfa_strict_valid_c_validate_len(size_t n) {
    if (n == 0) {
        return UTF8_DFA_STRICT_VALID_C_ERR_INVALID;
    }
    return UTF8_DFA_STRICT_VALID_C_OK;
}
