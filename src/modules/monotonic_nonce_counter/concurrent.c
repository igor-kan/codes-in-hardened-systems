#include "interface.h"
#include <pthread.h>

typedef struct { const replay_window_t* rw; const uint64_t* seqs; size_t lo; size_t hi; int* out; } rp_arg_t;

static void* rp_worker(void* raw) {
    rp_arg_t* a = (rp_arg_t*)raw;
    for (size_t i = a->lo; i < a->hi; ++i) {
        uint64_t seq = a->seqs[i];
        bool ok = false;
        if (seq > a->rw->high_water) ok = true;
        else if (a->rw->high_water - seq < 64ULL) ok = ((a->rw->bitmap & (1ULL << (a->rw->high_water - seq))) == 0);
        a->out[i] = ok ? 1 : 0;
    }
    return NULL;
}

void parallel_epoch_checks(const replay_window_t* rw, const uint64_t* seqs, size_t n, int* out_ok) {
    size_t mid = n / 2;
    rp_arg_t args[2] = {{rw, seqs, 0, mid, out_ok}, {rw, seqs, mid, n, out_ok}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, rp_worker, &args[0]);
    pthread_create(&t2, NULL, rp_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}
