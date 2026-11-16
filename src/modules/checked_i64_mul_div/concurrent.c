#include "interface.h"
#include <pthread.h>

typedef struct {
    const int64_t* a;
    const int64_t* b;
    int64_t* out;
    uint8_t* ok_flags;
    size_t s;
    size_t e;
} mul_job_t;

static void* mul_worker(void* arg) {
    mul_job_t* j = (mul_job_t*)arg;
    for (size_t i = j->s; i < j->e; ++i) {
        int64_t r = 0;
        if (checked_mul_i64(j->a[i], j->b[i], &r) == CHECKED_I64_MUL_DIV_OK) {
            j->out[i] = r;
            j->ok_flags[i] = 1U;
        } else {
            j->out[i] = 0;
            j->ok_flags[i] = 0U;
        }
    }
    return NULL;
}

checked_i64_mul_div_err_t batch_checked_mul_mt(const int64_t* a, const int64_t* b, int64_t* out, uint8_t* ok_flags, size_t n, size_t num_threads) {
    if (!a || !b || !out || !ok_flags) return CHECKED_I64_MUL_DIV_ERR_NULL;
    if (n == 0) return CHECKED_I64_MUL_DIV_OK;
    if (num_threads == 0) num_threads = 1;
    if (num_threads > 4) num_threads = 4;
    pthread_t th[4];
    mul_job_t args[4];
    size_t step = (n + num_threads - 1U) / num_threads;
    for (size_t t = 0; t < num_threads; ++t) {
        size_t s = t * step, e = s + step;
        if (e > n) e = n;
        args[t] = (mul_job_t){a, b, out, ok_flags, s, e};
        pthread_create(&th[t], NULL, mul_worker, &args[t]);
    }
    for (size_t t = 0; t < num_threads; ++t) pthread_join(th[t], NULL);
    return CHECKED_I64_MUL_DIV_OK;
}
