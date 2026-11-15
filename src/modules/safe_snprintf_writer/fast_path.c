#include "interface.h"
safe_snprintf_writer_err_t safe_snprintf_writer_append_char(safe_writer_t* w, char c) {
    if (!w || !w->buf || w->cap == 0) return SAFE_SNPRINTF_WRITER_ERR_NULL;
    if (w->len + 1U >= w->cap) { w->truncated = true; return SAFE_SNPRINTF_WRITER_ERR_BOUNDS; }
    w->buf[w->len++] = c;
    w->buf[w->len] = '\0';
    return SAFE_SNPRINTF_WRITER_OK;
}
