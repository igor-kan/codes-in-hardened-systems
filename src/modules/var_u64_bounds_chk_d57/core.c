#include "interface.h"
#include <math.h>
#include <string.h>

int safe_array_bytes(size_t header_sz, size_t count, size_t elem_sz, size_t *out) {
    if (elem_sz != 0 && count > SIZE_MAX / elem_sz) return -1;
    size_t body = count * elem_sz;
    if (header_sz > SIZE_MAX - body) return -1;
    *out = header_sz + body;
    return 0;
}
