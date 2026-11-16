#include "interface.h"
#include <pthread.h>
#include <stdlib.h>

typedef struct {
    const char** hexes;
    const size_t* lens;
    size_t s;
    size_t e;
    int ok;
} hx_job_t;

static void* hx_worker(void* arg) {
    hx_job_t* j = (hx_job_t*)arg;
    for (size_t i = j->s; i < j->e; ++i) {
        size_t cap = j->lens[i] / 2U + 1U;
        uint8_t* tmp = (uint8_t*)malloc(cap);
        size_t ol = 0;
        if (!tmp || cthex_decode(j->hexes[i], j->lens[i], tmp, cap, &ol) != CONSTANT_TIME_HEX_DECODE_OK) j->ok = 0;
        free(tmp);
    }
    return NULL;
}

constant_time_hex_decode_err_t cthex_batch_decode_mt(const char** hexes, const size_t* lens, size_t count, size_t num_threads) {
    if (!hexes || !lens) return CONSTANT_TIME_HEX_DECODE_ERR_NULL;
    if (count == 0) return CONSTANT_TIME_HEX_DECODE_OK;
    if (num_threads == 0) num_threads = 1;
    if (num_threads > 4) num_threads = 4;
    pthread_t th[4];
    hx_job_t args[4];
    size_t step = (count + num_threads - 1U) / num_threads;
    for (size_t t = 0; t < num_threads; ++t) {
        size_t s = t * step, e = s + step;
        if (e > count) e = count;
        args[t] = (hx_job_t){hexes, lens, s, e, 1};
        pthread_create(&th[t], NULL, hx_worker, &args[t]);
    }
    int ok = 1;
    for (size_t t = 0; t < num_threads; ++t) {
        pthread_join(th[t], NULL);
        if (!args[t].ok) ok = 0;
    }
    return ok ? CONSTANT_TIME_HEX_DECODE_OK : CONSTANT_TIME_HEX_DECODE_ERR_INVARIANT;
}
