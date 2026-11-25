#include "interface.h"
#include <math.h>
#include <string.h>

void tb_init_d60(token_bucket_t* tb, uint64_t cap, uint64_t rate_per_sec, uint64_t now_ns) {
    tb->tokens = cap;
    tb->capacity = cap;
    tb->rate_per_sec = rate_per_sec;
    tb->last_ns = now_ns;
}
bool tb_allow_d60(token_bucket_t* tb, uint64_t now_ns, uint64_t cost) {
    if (now_ns > tb->last_ns) {
        uint64_t elapsed = now_ns - tb->last_ns;
        __uint128_t added = ((__uint128_t)elapsed * tb->rate_per_sec) / 1000000000ULL;
        if (added > 0) {
            __uint128_t nxt = (__uint128_t)tb->tokens + added;
            tb->tokens = (nxt > tb->capacity) ? tb->capacity : (uint64_t)nxt;
            tb->last_ns = now_ns;
        }
    }
    if (tb->tokens >= cost) {
        tb->tokens -= cost;
        return true;
    }
    return false;
}
