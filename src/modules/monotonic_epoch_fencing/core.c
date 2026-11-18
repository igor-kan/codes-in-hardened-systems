#include "interface.h"
#include <math.h>
#include <string.h>

void fenced_init(fenced_register_t* r, uint64_t initial_epoch) {
    r->high_water_epoch = initial_epoch;
    r->committed_value = 0;
    r->rejected_stale = 0;
}
bool fenced_write(fenced_register_t* r, uint64_t token_epoch, uint64_t val) {
    if (token_epoch < r->high_water_epoch) {
        r->rejected_stale += 1;
        return false;
    }
    r->high_water_epoch = token_epoch;
    r->committed_value = val;
    return true;
}
