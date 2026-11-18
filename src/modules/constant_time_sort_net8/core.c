#include "interface.h"
#include <math.h>
#include <string.h>

void ct_cswap_i64(int64_t* a, int64_t* b) {
    int64_t va = *a, vb = *b;
    uint64_t gt = (uint64_t)(vb < va);
    uint64_t mask = 0ULL - gt;
    uint64_t diff = ((uint64_t)va ^ (uint64_t)vb) & mask;
    *a = (int64_t)((uint64_t)va ^ diff);
    *b = (int64_t)((uint64_t)vb ^ diff);
}
#define CMP2(i, j) ct_cswap_i64(&x[i], &x[j])
void ct_sort_net8(int64_t x[8]) {
    CMP2(0,1); CMP2(2,3); CMP2(4,5); CMP2(6,7);
    CMP2(0,2); CMP2(1,3); CMP2(4,6); CMP2(5,7);
    CMP2(1,2); CMP2(5,6);
    CMP2(0,4); CMP2(1,5); CMP2(2,6); CMP2(3,7);
    CMP2(2,4); CMP2(3,5);
    CMP2(1,2); CMP2(3,4); CMP2(5,6);
}
