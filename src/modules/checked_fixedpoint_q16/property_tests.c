#include "interface.h"
#include <assert.h>

int main(void) {
    q16_t a[8], b[8];
    for (int i = 0; i < 8; ++i) { a[i] = 2 << 16; b[i] = (i + 1) << 16; }
    int64_t dot = 0;
    q16_parallel_dot(a, b, 8, &dot);
    assert(dot == (2 * 36) * (1LL << 16));
    return 0;
}
