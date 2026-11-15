#include "interface.h"
#include <string.h>

safe_snprintf_writer_err_t safe_snprintf_writer_init(safe_writer_t* w, char* buf, size_t cap) {
    if (!w || !buf || cap == 0) return SAFE_SNPRINTF_WRITER_ERR_INVALID;
    w->buf = buf; w->cap = cap; w->len = 0; w->truncated = false;
    w->buf[0] = '\0';
    return SAFE_SNPRINTF_WRITER_OK;
}

safe_snprintf_writer_err_t safe_snprintf_writer_append_str(safe_writer_t* w, const char* s) {
    if (!w || !w->buf || !s) return SAFE_SNPRINTF_WRITER_ERR_NULL;
    if (w->cap == 0) return SAFE_SNPRINTF_WRITER_ERR_INVALID;
    size_t slen = strlen(s);
    size_t avail = (w->cap > w->len + 1U) ? (w->cap - 1U - w->len) : 0U;
    size_t copy = (slen <= avail) ? slen : avail;
    if (copy > 0) { memcpy(w->buf + w->len, s, copy); w->len += copy; }
    w->buf[w->len] = '\0';
    if (copy < slen) { w->truncated = true; return SAFE_SNPRINTF_WRITER_ERR_BOUNDS; }
    return SAFE_SNPRINTF_WRITER_OK;
}

safe_snprintf_writer_err_t safe_snprintf_writer_append_u64(safe_writer_t* w, uint64_t val) {
    char tmp[32];
    size_t p = 31; tmp[p] = '\0';
    do { tmp[--p] = (char)('0' + (val % 10ULL)); val /= 10ULL; } while (val != 0);
    return safe_snprintf_writer_append_str(w, tmp + p);
}
