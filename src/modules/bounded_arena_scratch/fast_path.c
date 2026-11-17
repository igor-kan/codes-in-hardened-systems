#include "interface.h"

size_t arena_fast_remaining(const guarded_arena_t* a) {
    return a->cap - a->offset;
}
