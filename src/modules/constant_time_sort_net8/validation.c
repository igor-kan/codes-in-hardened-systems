#include "interface.h"

constant_time_sort_net8_err_t constant_time_sort_net8_validate_len(size_t n) {
    if (n == 0) {
        return CONSTANT_TIME_SORT_NET8_ERR_INVALID;
    }
    return CONSTANT_TIME_SORT_NET8_OK;
}
