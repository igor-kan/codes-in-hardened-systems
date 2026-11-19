#include "interface.h"
#include <math.h>
#include <string.h>

void sarena_init(safe_arena_t* a) {
    memset(a->buf, 0, sizeof(a->buf));
    a->offset = 0; a->high_water = 0; a->tail_canary = ARENA_TAIL;
}
void* sarena_alloc(safe_arena_t* a, size_t size, size_t align) {
    if (align == 0 || (align & (align - 1U)) != 0) return NULL;
    size_t cur = (a->offset + (align - 1U)) & ~(align - 1U);
    if (cur > ARENA_CAP || size > ARENA_CAP - cur) return NULL;
    a->offset = cur + size;
    if (a->offset > a->high_water) a->high_water = a->offset;
    return &a->buf[cur];
}
bool sarena_audit(const safe_arena_t* a) {
    return a->tail_canary == ARENA_TAIL && a->offset <= ARENA_CAP;
}
void sarena_reset(safe_arena_t* a) {
    memset(a->buf, 0, a->offset);
    a->offset = 0;
}
