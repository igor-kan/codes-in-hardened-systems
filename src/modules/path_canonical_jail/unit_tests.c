#include "interface.h"
#include <assert.h>
#include <string.h>

int main(void) {
    path_jail_result_t r;
    const char* p1 = "a/./b/c/../d//file.txt";
    assert(path_canonical_jail_normalize(p1, strlen(p1), &r) == PATH_CANONICAL_JAIL_OK);
    assert(strcmp(r.normalized, "a/b/d/file.txt") == 0);
    assert(path_canonical_jail_verify_containment(&r) == PATH_CANONICAL_JAIL_OK);

    const char* esc = "a/../../etc/passwd";
    assert(path_canonical_jail_normalize(esc, strlen(esc), &r) == PATH_CANONICAL_JAIL_ERR_INVALID);

    const char nul_path[8] = {'a','/','b','\0','c','d','e','f'};
    assert(path_canonical_jail_normalize(nul_path, 8, &r) == PATH_CANONICAL_JAIL_ERR_INVALID);
    return 0;
}
