#include "interface.h"

bounded_arena_scratch_err_t verify_arena_bounds(void) {
    uint8_t buf[256];
    guarded_arena_t a;
    if (arena_init(&a, buf, sizeof(buf)) != BOUNDED_ARENA_SCRATCH_OK) return BOUNDED_ARENA_SCRATCH_ERR_INVALID;
    size_t mark = a.offset;
    void* p1 = arena_alloc_aligned(&a, 32, 16);
    void* p2 = arena_alloc_aligned(&a, 1024, 8);
    if (!p1 || p2 != NULL) return BOUNDED_ARENA_SCRATCH_ERR_INVARIANT;
    if (arena_rewind(&a, mark) != BOUNDED_ARENA_SCRATCH_OK) return BOUNDED_ARENA_SCRATCH_ERR_INVARIANT;
    return arena_fast_remaining(&a) == a.cap ? BOUNDED_ARENA_SCRATCH_OK : BOUNDED_ARENA_SCRATCH_ERR_INVARIANT;
}
