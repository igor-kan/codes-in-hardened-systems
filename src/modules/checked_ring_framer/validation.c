#include "interface.h"

checked_ring_framer_err_t validate_mtu(framer_cfg_t cfg, size_t plen) {
    if (cfg.max_mtu == 0 || cfg.max_mtu > FRAMER_MAX_MTU || plen > cfg.max_mtu) return CHECKED_RING_FRAMER_ERR_BOUNDS;
    return CHECKED_RING_FRAMER_OK;
}
