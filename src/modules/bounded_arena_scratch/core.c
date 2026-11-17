#include "interface.h"

bounded_arena_scratch_err_t arena_init(guarded_arena_t* a, uint8_t* buf, size_t total_bytes) {
    if (!a || !buf) return BOUNDED_ARENA_SCRATCH_ERR_NULL;
    if (total_bytes <= sizeof(uint64_t) + 16) return BOUNDED_ARENA_SCRATCH_ERR_BOUNDS;
    size_t usable = (total_bytes - sizeof(uint64_t)) & ~((size_t)7);
    a->base = buf;
    a->cap = usable;
    a->offset = 0;
    a->trailer_canary = (uint64_t*)(buf + usable);
    *a->trailer_canary = ARENA_CANARY;
    return BOUNDED_ARENA_SCRATCH_OK;
}

void* arena_alloc_aligned(guarded_arena_t* a, size_t size, size_t align) {
    if (!a || align == 0 || (align & (align - 1)) != 0) return NULL;
    size_t rem = a->offset & (align - 1);
    size_t pad = rem ? (align - rem) : 0;
    if (pad > a->cap - a->offset || size > a->cap - a->offset - pad) return NULL;
    size_t start = a->offset + pad;
    a->offset = start + size;
    return a->base + start;
}

bounded_arena_scratch_err_t arena_rewind(guarded_arena_t* a, size_t mark) {
    if (!a) return BOUNDED_ARENA_SCRATCH_ERR_NULL;
    if (mark > a->offset) return BOUNDED_ARENA_SCRATCH_ERR_BOUNDS;
    a->offset = mark;
    return arena_check_canary(a);
}
