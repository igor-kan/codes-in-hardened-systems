#include "interface.h"
#include <math.h>
#include <string.h>

int safe_cstr_copy(char *dst, size_t cap, const char *src, size_t *written) {
    if (cap == 0) return -1;
    size_t i = 0;
    while (i + 1 < cap && src[i] != 0) {
        dst[i] = src[i];
        ++i;
    }
    dst[i] = 0;
    *written = i;
    return src[i] == 0 ? 0 : -1;
}
