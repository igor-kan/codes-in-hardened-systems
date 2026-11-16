#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint8_t** bufs;
    const size_t* lens;
    size_t s;
    size_t e;
    int ok;
} b64_job_t;

static void* b64_worker(void* arg) {
    b64_job_t* j = (b64_job_t*)arg;
    for (size_t i = j->s; i < j->e; ++i) {
        if (b64u_verify_invariants(j->bufs[i], j->lens[i]) != SAFE_BASE64URL_STRICT_OK) j->ok = 0;
    }
    return NULL;
}

safe_base64url_strict_err_t b64u_batch_roundtrip_mt(const uint8_t** bufs, const size_t* lens, size_t count, size_t num_threads) {
    if (!bufs || !lens) return SAFE_BASE64URL_STRICT_ERR_NULL;
    if (count == 0) return SAFE_BASE64URL_STRICT_OK;
    if (num_threads == 0) num_threads = 1;
    if (num_threads > 4) num_threads = 4;
    pthread_t th[4];
    b64_job_t args[4];
    size_t step = (count + num_threads - 1U) / num_threads;
    for (size_t t = 0; t < num_threads; ++t) {
        size_t s = t * step, e = s + step;
        if (e > count) e = count;
        args[t] = (b64_job_t){bufs, lens, s, e, 1};
        pthread_create(&th[t], NULL, b64_worker, &args[t]);
    }
    int ok = 1;
    for (size_t t = 0; t < num_threads; ++t) { pthread_join(th[t], NULL); if (!args[t].ok) ok = 0; }
    return ok ? SAFE_BASE64URL_STRICT_OK : SAFE_BASE64URL_STRICT_ERR_INVARIANT;
}
