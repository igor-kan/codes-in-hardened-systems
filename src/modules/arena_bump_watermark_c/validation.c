#include "interface.h"

arena_bump_watermark_c_err_t arena_bump_watermark_c_validate_len(size_t n) {
    if (n == 0) {
        return ARENA_BUMP_WATERMARK_C_ERR_INVALID;
    }
    return ARENA_BUMP_WATERMARK_C_OK;
}
