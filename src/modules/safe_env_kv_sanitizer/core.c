#include "interface.h"

kv_parse_result_t kv_parse_strict(const char* rec, size_t len) {
    if (!rec || len < 3) return (kv_parse_result_t){0, 0, 0, false};
    size_t eq = len;
    for (size_t i = 0; i < len; ++i) {
        if (rec[i] == '\0') return (kv_parse_result_t){0, 0, 0, false};
        if (rec[i] == '=' && eq == len) eq = i;
    }
    if (eq == 0 || eq >= len) return (kv_parse_result_t){0, 0, 0, false};
    if (!kv_fast_is_upper_ident(rec, eq)) return (kv_parse_result_t){0, 0, 0, false};
    size_t vlen = len - (eq + 1);
    if (kv_validate_char_set(rec + eq + 1, vlen) != SAFE_ENV_KV_SANITIZER_OK) {
        return (kv_parse_result_t){0, 0, 0, false};
    }
    return (kv_parse_result_t){eq, eq + 1, vlen, true};
}
