#include "interface.h"
#include <math.h>
#include <string.h>

int safe_div_i64(int64_t a, int64_t b, int64_t *q, int64_t *r) {
    if (b == 0) return -1;
    if (a == INT64_MIN && b == -1) return -1;
    *q = a / b;
    *r = a % b;
    return 0;
}
