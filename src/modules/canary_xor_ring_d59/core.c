#include "interface.h"
#include <math.h>
#include <string.h>

static uint64_t tag_for(uint64_t v, uint64_t c) {
    return ((v ^ c) * 0x9E3779B97F4A7C15ULL) ^ 0xA5A5A5A5A5A5A5A5ULL;
}

sealed_slot_t seal_slot(uint64_t v, uint64_t cookie) {
    sealed_slot_t s = {v, tag_for(v, cookie)};
    return s;
}

int unseal_slot(sealed_slot_t s, uint64_t cookie, uint64_t *out) {
    if (s.tag != tag_for(s.val, cookie)) return -1;
    *out = s.val;
    return 0;
}
