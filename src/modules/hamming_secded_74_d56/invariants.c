#include "interface.h"

hamming_secded_74_d56_err_t hamming_secded_74_d56_verify_guard(bool cond) {
    if (!cond) {
        return HAMMING_SECDED_74_D56_ERR_INVARIANT;
    }
    return HAMMING_SECDED_74_D56_OK;
}
