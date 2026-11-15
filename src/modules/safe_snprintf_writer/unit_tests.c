#include "interface.h"
#include <assert.h>
#include <string.h>

int main(void) {
    char buf[16]; safe_writer_t w;
    assert(safe_snprintf_writer_init(&w, buf, 16) == SAFE_SNPRINTF_WRITER_OK);
    assert(safe_snprintf_writer_append_str(&w, "id=") == SAFE_SNPRINTF_WRITER_OK);
    assert(safe_snprintf_writer_append_u64(&w, 123456) == SAFE_SNPRINTF_WRITER_OK);
    assert(strcmp(buf, "id=123456") == 0 && !w.truncated);
    assert(safe_snprintf_writer_append_str(&w, "-overflow-tail") == SAFE_SNPRINTF_WRITER_ERR_BOUNDS);
    assert(w.truncated && w.len == 15 && buf[15] == '\0');
    assert(safe_snprintf_writer_check_invariants(&w) == SAFE_SNPRINTF_WRITER_OK);
    return 0;
}
