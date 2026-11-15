#include "interface.h"
#include <pthread.h>

typedef struct { const uint8_t* s; size_t len; utf8_overlong_sanitizer_err_t res; } utf8_san_job_t;
static void* utf8_san_worker(void* p) {
    utf8_san_job_t* j = (utf8_san_job_t*)p;
    utf8_san_report_t rep;
    j->res = utf8_overlong_sanitizer_scan(j->s, j->len, &rep);
    return NULL;
}
utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_batch_mt(const uint8_t** bufs, const size_t* lens, size_t n) {
    if (!bufs || !lens) return UTF8_OVERLONG_SANITIZER_ERR_NULL;
    if (n > 8) n = 8;
    pthread_t th[8]; utf8_san_job_t jobs[8];
    for (size_t i = 0; i < n; ++i) { jobs[i] = (utf8_san_job_t){bufs[i], lens[i], UTF8_OVERLONG_SANITIZER_OK}; pthread_create(&th[i], NULL, utf8_san_worker, &jobs[i]); }
    for (size_t i = 0; i < n; ++i) { pthread_join(th[i], NULL); if (jobs[i].res != UTF8_OVERLONG_SANITIZER_OK) return jobs[i].res; }
    return UTF8_OVERLONG_SANITIZER_OK;
}
