#include "interface.h"
#include <math.h>
#include <string.h>

void bump_init(bump_arena_t *a, uint8_t *buf, size_t cap) {
    a->base = buf;
    a->cap = cap;
    a->used = 0;
}

uint8_t *bump_alloc(bump_arena_t *a, size_t sz, size_t align) {
    if (align == 0 || (align & (align - 1)) != 0) return NULL;
    size_t rem = a->used & (align - 1);
    size_t pad = rem == 0 ? 0 : (align - rem);
    if (pad > a->cap - a->used) return NULL;
    size_t start = a->used + pad;
    if (sz > a->cap - start) return NULL;
    a->used = start + sz;
    return a->base + start;
}

void bump_reset(bump_arena_t *a) {
    a->used = 0;
}
