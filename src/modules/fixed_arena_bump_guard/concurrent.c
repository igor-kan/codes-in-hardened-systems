#include "interface.h"
#include <pthread.h>

typedef struct { int ok; } ga_job_t;
static void* ga_worker(void* arg) {
    ga_job_t* j = (ga_job_t*)arg;
    uint8_t slab[512];
    guarded_arena_t a;
    if (garena_init(&a, slab, sizeof(slab)) != FIXED_ARENA_BUMP_GUARD_OK) { j->ok = 0; return NULL; }
    for (int i = 0; i < 8; ++i) {
        void* p = garena_alloc(&a, 32, 16);
        if (!p || ((uintptr_t)p & 15U) != 0) j->ok = 0;
    }
    if (garena_check_canary(&a) != FIXED_ARENA_BUMP_GUARD_OK) j->ok = 0;
    garena_reset_wipe(&a);
    return NULL;
}

fixed_arena_bump_guard_err_t garena_mt_scratch_test(size_t n_threads) {
    if (n_threads == 0) n_threads = 1;
    if (n_threads > 4) n_threads = 4;
    pthread_t th[4];
    ga_job_t jobs[4];
    for (size_t t = 0; t < n_threads; ++t) {
        jobs[t].ok = 1;
        pthread_create(&th[t], NULL, ga_worker, &jobs[t]);
    }
    int ok = 1;
    for (size_t t = 0; t < n_threads; ++t) { pthread_join(th[t], NULL); if (!jobs[t].ok) ok = 0; }
    return ok ? FIXED_ARENA_BUMP_GUARD_OK : FIXED_ARENA_BUMP_GUARD_ERR_INVARIANT;
}
