#include "interface.h"
#include <math.h>
#include <string.h>

int safe_sub_u64(uint64_t a, uint64_t b, uint64_t *out) {
    if (a < b) return -1;
    *out = a - b;
    return 0;
}

uint64_t sat_sub_u64(uint64_t a, uint64_t b) {
    return a < b ? 0ULL : (a - b);
}
