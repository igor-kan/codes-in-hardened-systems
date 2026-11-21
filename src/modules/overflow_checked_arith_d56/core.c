#include "interface.h"
#include <math.h>
#include <string.h>

int safe_add_u64(uint64_t a, uint64_t b, uint64_t *out) {
    if (a > UINT64_MAX - b) return -1;
    *out = a + b;
    return 0;
}

int safe_mul_u64(uint64_t a, uint64_t b, uint64_t *out) {
    if (a != 0 && b > UINT64_MAX / a) return -1;
    *out = a * b;
    return 0;
}

uint64_t sat_add_u64(uint64_t a, uint64_t b) {
    return (a > UINT64_MAX - b) ? UINT64_MAX : (a + b);
}
