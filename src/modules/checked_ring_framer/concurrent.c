#include "interface.h"
#include <pthread.h>

typedef struct { const uint8_t* d; size_t n; uint32_t* out; } cr_arg_t;

static void* cr_worker(void* raw) {
    cr_arg_t* a = (cr_arg_t*)raw;
    *a->out = fast_crc32_bytes(a->d, a->n);
    return NULL;
}

void parallel_crc_tags(const uint8_t* a, size_t na, const uint8_t* b, size_t nb, uint32_t out[2]) {
    cr_arg_t args[2] = {{a, na, &out[0]}, {b, nb, &out[1]}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, cr_worker, &args[0]);
    pthread_create(&t2, NULL, cr_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}
