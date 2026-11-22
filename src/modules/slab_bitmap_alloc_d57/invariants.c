#include "interface.h"

slab_bitmap_alloc_d57_err_t slab_bitmap_alloc_d57_verify_guard(bool cond) {
    if (!cond) {
        return SLAB_BITMAP_ALLOC_D57_ERR_INVARIANT;
    }
    return SLAB_BITMAP_ALLOC_D57_OK;
}
