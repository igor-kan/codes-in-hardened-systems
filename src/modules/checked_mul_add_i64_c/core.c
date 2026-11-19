#include "interface.h"
#include <math.h>
#include <string.h>

bool checked_add_i64(int64_t a, int64_t b, int64_t* out) {
    return !__builtin_add_overflow(a, b, out);
}
bool checked_mul_i64(int64_t a, int64_t b, int64_t* out) {
    return !__builtin_mul_overflow(a, b, out);
}
int64_t saturating_add_i64(int64_t a, int64_t b) {
    int64_t r = 0;
    if (!__builtin_add_overflow(a, b, &r)) return r;
    return a >= 0 ? INT64_MAX : INT64_MIN;
}
