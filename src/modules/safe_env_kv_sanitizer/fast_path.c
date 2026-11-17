#include "interface.h"

bool kv_fast_is_upper_ident(const char* k, size_t klen) {
    if (klen == 0) return false;
    char c0 = k[0];
    if (!((c0 >= 'A' && c0 <= 'Z') || c0 == '_')) return false;
    for (size_t i = 1; i < klen; ++i) {
        char c = k[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_')) return false;
    }
    return true;
}
