#include "interface.h"
#include <pthread.h>

typedef struct { const uint8_t* p; size_t n; utf8_audit_t* out; } u8_arg_t;

static void* u8_worker(void* raw) {
    u8_arg_t* a = (u8_arg_t*)raw;
    *a->out = utf8_strict_validate(a->p, a->n);
    return NULL;
}

void utf8_parallel_audit(const uint8_t* a, size_t na, const uint8_t* b, size_t nb, utf8_audit_t out[2]) {
    u8_arg_t args[2] = {{a, na, &out[0]}, {b, nb, &out[1]}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, u8_worker, &args[0]);
    pthread_create(&t2, NULL, u8_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}
