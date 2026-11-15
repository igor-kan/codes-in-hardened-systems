#include "interface.h"
#include <assert.h>

int main(void) {
    for (size_t cap = 1; cap <= 20; ++cap) {
        char buf[32]; safe_writer_t w;
        assert(safe_snprintf_writer_init(&w, buf, cap) == SAFE_SNPRINTF_WRITER_OK);
        safe_snprintf_writer_append_str(&w, "0123456789ABCDEF");
        assert(safe_snprintf_writer_check_invariants(&w) == SAFE_SNPRINTF_WRITER_OK);
    }
    return 0;
}
