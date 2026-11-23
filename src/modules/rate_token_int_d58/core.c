#include "interface.h"
#include <math.h>
#include <string.h>

void bucket_init(int_bucket_t *b, uint64_t max_c, uint64_t rate) {
    b->credits = max_c;
    b->max_credits = max_c;
    b->rate_per_tick = rate;
    b->last_tick = 0;
}

int bucket_take(int_bucket_t *b, uint64_t tick, uint64_t cost) {
    if (tick > b->last_tick) {
        uint64_t dt = tick - b->last_tick;
        uint64_t add = (b->rate_per_tick > 0 && dt > (b->max_credits - b->credits) / b->rate_per_tick)
            ? (b->max_credits - b->credits) : (dt * b->rate_per_tick);
        b->credits += add;
        b->last_tick = tick;
    }
    if (b->credits < cost) return -1;
    b->credits -= cost;
    return 0;
}
