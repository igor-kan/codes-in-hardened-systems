#include "interface.h"

arena_bump_watermark_c_err_t arena_bump_watermark_c_verify_guard(bool cond) {
    if (!cond) {
        return ARENA_BUMP_WATERMARK_C_ERR_INVARIANT;
    }
    return ARENA_BUMP_WATERMARK_C_OK;
}
