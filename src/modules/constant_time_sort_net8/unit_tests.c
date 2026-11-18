#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(constant_time_sort_net8_validate_len(1) == CONSTANT_TIME_SORT_NET8_OK);
    int64_t a[8] = {80, 10, 70, 20, 60, 30, 50, 40};
    ct_sort_net8(a);
    for (int i = 0; i < 8; ++i) assert(a[i] == (i + 1) * 10);
    assert(constant_time_sort_net8_verify_guard(true) == CONSTANT_TIME_SORT_NET8_OK);
    return 0;
}
