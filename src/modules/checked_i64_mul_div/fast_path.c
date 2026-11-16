#include "interface.h"

int64_t saturating_mul_i64(int64_t a, int64_t b) {
    int64_t res = 0;
    if (checked_mul_i64(a, b, &res) == CHECKED_I64_MUL_DIV_OK) return res;
    bool neg = ((a < 0) != (b < 0));
    return neg ? INT64_MIN : INT64_MAX;
}
