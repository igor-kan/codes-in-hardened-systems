#include "interface.h"

void qslab_fast_poison(uint8_t* blk, uint8_t byte, size_t n) {
    volatile uint8_t* vp = blk;
    for (size_t i = 0; i < n; ++i) vp[i] = byte;
}
