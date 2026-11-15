#include "interface.h"
#include <pthread.h>
static pthread_mutex_t g_slab_lock = PTHREAD_MUTEX_INITIALIZER;
void* redzone_slab_poison_alloc_locked(hardened_slab_t* s) {
    pthread_mutex_lock(&g_slab_lock);
    void* p = redzone_slab_poison_alloc(s);
    pthread_mutex_unlock(&g_slab_lock);
    return p;
}
