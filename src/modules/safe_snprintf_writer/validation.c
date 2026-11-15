#include "interface.h"
safe_snprintf_writer_err_t safe_snprintf_writer_validate_ptr(const safe_writer_t* w) {
    if (!w || !w->buf || w->cap == 0) return SAFE_SNPRINTF_WRITER_ERR_NULL;
    if (w->len >= w->cap) return SAFE_SNPRINTF_WRITER_ERR_BOUNDS;
    return SAFE_SNPRINTF_WRITER_OK;
}
