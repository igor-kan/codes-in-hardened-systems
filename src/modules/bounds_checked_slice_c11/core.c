#include "interface.h"
#include <math.h>
#include <string.h>

bool safe_subslice(safe_span_t src, size_t off, size_t len, safe_span_t* out) {
    if (!src.ptr || !out || off > src.len || len > src.len - off) return false;
    out->ptr = src.ptr + off;
    out->len = len;
    return true;
}
bool safe_nonoverlap_copy(uint8_t* dst, size_t dst_cap, const uint8_t* src, size_t n) {
    if (!dst || !src || n > dst_cap) return false;
    uintptr_t da = (uintptr_t)dst, sa = (uintptr_t)src;
    if ((da >= sa && da - sa < n) || (sa >= da && sa - da < n)) return false;
    memcpy(dst, src, n);
    return true;
}
