#include "interface.h"
#include <pthread.h>

typedef struct { int ok; } sl_job_t;
static void* sl_worker(void* arg) {
    sl_job_t* j = (sl_job_t*)arg;
    safe_limiter_t lim;
    slim_init(&lim, 10, 5, 1000000ULL);
    if (!slim_allow(&lim, 1000000ULL, 10)) j->ok = 0;
    if (slim_allow(&lim, 500000ULL, 1)) j->ok = 0; // backward clock skew
    if (!slim_allow(&lim, 2001000000ULL, 5)) j->ok = 0; // +2 seconds => capped at 10
    if (slim_verify_invariants(&lim) != MONOTONIC_RATE_WINDOW_SAFE_OK) j->ok = 0;
    return NULL;
}

monotonic_rate_window_safe_err_t slim_mt_sim(size_t n_threads) {
    if (n_threads == 0) n_threads = 1;
    if (n_threads > 4) n_threads = 4;
    pthread_t th[4];
    sl_job_t jobs[4];
    for (size_t t = 0; t < n_threads; ++t) { jobs[t].ok = 1; pthread_create(&th[t], NULL, sl_worker, &jobs[t]); }
    int ok = 1;
    for (size_t t = 0; t < n_threads; ++t) { pthread_join(th[t], NULL); if (!jobs[t].ok) ok = 0; }
    return ok ? MONOTONIC_RATE_WINDOW_SAFE_OK : MONOTONIC_RATE_WINDOW_SAFE_ERR_INVARIANT;
}
