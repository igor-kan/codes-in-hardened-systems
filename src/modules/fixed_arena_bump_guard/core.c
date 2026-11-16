#include "interface.h"
#include <string.h>

static void write_u64(uint8_t* p, uint64_t v) { memcpy(p, &v, sizeof(v)); }

fixed_arena_bump_guard_err_t garena_init(guarded_arena_t* a, uint8_t* backing, size_t cap) {
    if (!a || !backing) return FIXED_ARENA_BUMP_GUARD_ERR_NULL;
    if (cap < sizeof(uint64_t)) return FIXED_ARENA_BUMP_GUARD_ERR_BOUNDS;
    a->base = backing;
    a->cap = cap - sizeof(uint64_t);
    a->offset = 0;
    a->alloc_count = 0;
    write_u64(a->base + a->cap, GUARD_CANARY_U64);
    return FIXED_ARENA_BUMP_GUARD_OK;
}

void* garena_alloc(guarded_arena_t* a, size_t size, size_t align) {
    if (!a || !a->base || size == 0 || align == 0 || (align & (align - 1U)) != 0) return NULL;
    uintptr_t cur = (uintptr_t)(a->base + a->offset);
    uintptr_t mask = (uintptr_t)align - 1U;
    if (cur > UINTPTR_MAX - mask) return NULL;
    uintptr_t aligned = (cur + mask) & ~mask;
    size_t pad = (size_t)(aligned - cur);
    if (pad > a->cap - a->offset) return NULL;
    if (size > a->cap - a->offset - pad) return NULL;
    void* ptr = (void*)(a->base + a->offset + pad);
    a->offset += pad + size;
    ++a->alloc_count;
    return ptr;
}

void garena_reset_wipe(guarded_arena_t* a) {
    if (!a || !a->base) return;
    volatile uint8_t* p = (volatile uint8_t*)a->base;
    for (size_t i = 0; i < a->offset; ++i) p[i] = 0xAAU;
    a->offset = 0;
    a->alloc_count = 0;
    write_u64(a->base + a->cap, GUARD_CANARY_U64);
}
