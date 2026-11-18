#include "interface.h"

canary_framed_ring_fifo_err_t canary_framed_ring_fifo_validate_len(size_t n) {
    if (n == 0) {
        return CANARY_FRAMED_RING_FIFO_ERR_INVALID;
    }
    return CANARY_FRAMED_RING_FIFO_OK;
}
