#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint8_t** frames;
    const size_t* lens;
    size_t max_p;
    size_t s;
    size_t e;
    int ok;
} jh_job_t;

static void* jh_worker(void* arg) {
    jh_job_t* j = (jh_job_t*)arg;
    for (size_t i = j->s; i < j->e; ++i) {
        jhdr_t h;
        if (jhdr_verify_frame(j->frames[i], j->lens[i], j->max_p, &h) != CRC32_JOURNAL_HEADER_OK) j->ok = 0;
    }
    return NULL;
}

crc32_journal_header_err_t jhdr_batch_verify_mt(const uint8_t** frames, const size_t* lens, size_t max_payload, size_t count, size_t num_threads) {
    if (!frames || !lens) return CRC32_JOURNAL_HEADER_ERR_NULL;
    if (count == 0) return CRC32_JOURNAL_HEADER_OK;
    if (num_threads == 0) num_threads = 1;
    if (num_threads > 4) num_threads = 4;
    pthread_t th[4];
    jh_job_t args[4];
    size_t step = (count + num_threads - 1U) / num_threads;
    for (size_t t = 0; t < num_threads; ++t) {
        size_t s = t * step, e = s + step;
        if (e > count) e = count;
        args[t] = (jh_job_t){frames, lens, max_payload, s, e, 1};
        pthread_create(&th[t], NULL, jh_worker, &args[t]);
    }
    int ok = 1;
    for (size_t t = 0; t < num_threads; ++t) {
        pthread_join(th[t], NULL);
        if (!args[t].ok) ok = 0;
    }
    return ok ? CRC32_JOURNAL_HEADER_OK : CRC32_JOURNAL_HEADER_ERR_INVARIANT;
}
