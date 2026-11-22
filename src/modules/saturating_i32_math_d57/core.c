#include "interface.h"
#include <math.h>
#include <string.h>

int32_t sat_add_i32(int32_t a, int32_t b) {
    int64_t s = (int64_t)a + (int64_t)b;
    if (s > INT32_MAX) return INT32_MAX;
    if (s < INT32_MIN) return INT32_MIN;
    return (int32_t)s;
}

int32_t sat_sub_i32(int32_t a, int32_t b) {
    int64_t d = (int64_t)a - (int64_t)b;
    if (d > INT32_MAX) return INT32_MAX;
    if (d < INT32_MIN) return INT32_MIN;
    return (int32_t)d;
}

int32_t sat_neg_i32(int32_t a) {
    return a == INT32_MIN ? INT32_MAX : -a;
}
