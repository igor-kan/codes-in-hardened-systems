#include "interface.h"

slab_bitmap_alloc_d57_err_t slab_bitmap_alloc_d57_validate_len(size_t n) {
    if (n == 0) {
        return SLAB_BITMAP_ALLOC_D57_ERR_INVALID;
    }
    return SLAB_BITMAP_ALLOC_D57_OK;
}
