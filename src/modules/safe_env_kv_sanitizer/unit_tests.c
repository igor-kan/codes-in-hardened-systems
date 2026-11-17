#include "interface.h"
#include <assert.h>

int main(void) {
    assert(kv_verify_injection_blocked() == SAFE_ENV_KV_SANITIZER_OK);
    const char embedded_nul[6] = {'A', '=', '1', '\0', '2', '3'};
    assert(!kv_parse_strict(embedded_nul, 6).ok);
    return 0;
}
