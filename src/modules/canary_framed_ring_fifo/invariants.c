#include "interface.h"

canary_framed_ring_fifo_err_t canary_framed_ring_fifo_verify_guard(bool cond) {
    if (!cond) {
        return CANARY_FRAMED_RING_FIFO_ERR_INVARIANT;
    }
    return CANARY_FRAMED_RING_FIFO_OK;
}
