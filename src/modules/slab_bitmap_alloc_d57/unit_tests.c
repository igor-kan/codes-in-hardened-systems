#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(slab_bitmap_alloc_d57_validate_len(1) == SLAB_BITMAP_ALLOC_D57_OK);
    slab64_t sb; slab64_init(&sb);
    int s0 = slab64_alloc(&sb), s1 = slab64_alloc(&sb);
    assert(s0 == 0 && s1 == 1);
    assert(slab64_free(&sb, s0) == 0 && slab64_free(&sb, s0) == -1);
    assert(slab64_alloc(&sb) == 0);
    assert(slab_bitmap_alloc_d57_verify_guard(true) == SLAB_BITMAP_ALLOC_D57_OK);
    return 0;
}
