#include "interface.h"
unsigned privilege_cap_mask_popcount(uint64_t mask) {
    unsigned c = 0;
    while (mask) { mask &= (mask - 1ULL); c++; }
    return c;
}
