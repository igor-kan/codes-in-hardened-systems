#include "interface.h"
path_canonical_jail_err_t path_canonical_jail_validate_chars(const char* raw, size_t raw_len) {
    if (!raw) return PATH_CANONICAL_JAIL_ERR_NULL;
    for (size_t i = 0; i < raw_len; ++i) {
        uint8_t c = (uint8_t)raw[i];
        if (c == 0 || c < 0x20U) return PATH_CANONICAL_JAIL_ERR_INVALID; // Reject NUL and ASCII controls
    }
    return PATH_CANONICAL_JAIL_OK;
}
