#include "interface.h"
#include <math.h>
#include <string.h>

bool ct_mem_equal(const uint8_t* a, const uint8_t* b, size_t n) {
    if (!a || !b) return false;
    volatile uint8_t acc = 0;
    for (size_t i = 0; i < n; ++i) {
        acc = (uint8_t)(acc | (a[i] ^ b[i]));
    }
    return acc == 0;
}
