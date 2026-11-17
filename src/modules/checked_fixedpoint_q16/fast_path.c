#include "interface.h"
#include <limits.h>

q16_t q16_saturating_add(q16_t a, q16_t b) {
    int64_t s = (int64_t)a + (int64_t)b;
    if (s > INT32_MAX) return INT32_MAX;
    if (s < INT32_MIN) return INT32_MIN;
    return (q16_t)s;
}
