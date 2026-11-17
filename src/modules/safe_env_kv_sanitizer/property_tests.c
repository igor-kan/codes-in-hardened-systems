#include "interface.h"
#include <assert.h>

int main(void) {
    const char* recs[4] = {"FOO=bar", "BAR=`id`", "PORT=8080", "X=a|b"};
    const size_t lens[4] = {7, 8, 9, 5};
    int out[4] = {0};
    kv_parallel_filter(recs, lens, 4, out);
    assert(out[0] == 1 && out[1] == 0 && out[2] == 1 && out[3] == 0);
    return 0;
}
