#include "interface.h"
#include <math.h>
#include <string.h>

int validate_slice_range(size_t total_len, size_t offset, size_t len) {
    if (offset > total_len) return -1;
    if (len > total_len - offset) return -1;
    return 0;
}
