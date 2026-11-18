#include "interface.h"

constant_time_sort_net8_err_t constant_time_sort_net8_verify_guard(bool cond) {
    if (!cond) {
        return CONSTANT_TIME_SORT_NET8_ERR_INVARIANT;
    }
    return CONSTANT_TIME_SORT_NET8_OK;
}
