#include "interface.h"
#include <math.h>
#include <string.h>

void seqlock_write(seqlock_pair_t *sl, uint64_t a, uint64_t b) {
    sl->seq += 1ULL;
    sl->lo = a;
    sl->hi = b;
    sl->seq += 1ULL;
}

int seqlock_try_read(const seqlock_pair_t *sl, uint64_t *a, uint64_t *b) {
    uint64_t s1 = sl->seq;
    if (s1 & 1ULL) return -1;
    uint64_t x = sl->lo;
    uint64_t y = sl->hi;
    uint64_t s2 = sl->seq;
    if (s1 != s2) return -1;
    *a = x;
    *b = y;
    return 0;
}
