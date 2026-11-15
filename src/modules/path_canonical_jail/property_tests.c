#include "interface.h"
#include <assert.h>
#include <string.h>

int main(void) {
    const char* escapes[] = {"..", "../a", "a/b/../../../c", "./..", "\\..\\x"};
    for (size_t i = 0; i < 5; ++i) {
        path_jail_result_t r;
        assert(path_canonical_jail_normalize(escapes[i], strlen(escapes[i]), &r) == PATH_CANONICAL_JAIL_ERR_INVALID);
    }
    return 0;
}
