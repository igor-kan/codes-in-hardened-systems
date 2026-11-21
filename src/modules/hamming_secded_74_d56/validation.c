#include "interface.h"

hamming_secded_74_d56_err_t hamming_secded_74_d56_validate_len(size_t n) {
    if (n == 0) {
        return HAMMING_SECDED_74_D56_ERR_INVALID;
    }
    return HAMMING_SECDED_74_D56_OK;
}
