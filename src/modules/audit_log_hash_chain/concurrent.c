#include "interface.h"
#include <pthread.h>

typedef struct { const audit_ledger_t* l; audit_log_hash_chain_err_t* out; } au_arg_t;

static void* au_worker(void* raw) {
    au_arg_t* a = (au_arg_t*)raw;
    *a->out = audit_verify_chain(a->l);
    return NULL;
}

void parallel_verify_two_ledgers(const audit_ledger_t* a, const audit_ledger_t* b, audit_log_hash_chain_err_t out[2]) {
    au_arg_t args[2] = {{a, &out[0]}, {b, &out[1]}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, au_worker, &args[0]);
    pthread_create(&t2, NULL, au_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}
