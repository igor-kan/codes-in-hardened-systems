#include "interface.h"
#include <math.h>
#include <string.h>

static uint64_t frame_mac(uint64_t cookie, uint64_t d0, uint64_t d1) {
    uint64_t h = cookie ^ 0xA5A55A5A3C3CC3C3ULL;
    h = (h ^ d0) * 0x9E3779B97F4A7C15ULL;
    h = (h ^ d1) * 0xBF58476D1CE4E5B9ULL;
    return h ^ (h >> 31);
}

void guard_seal(guarded_frame_t *f, uint64_t secret_cookie, uint64_t d0, uint64_t d1) {
    f->data[0] = d0;
    f->data[1] = d1;
    f->magic_canary = secret_cookie ^ 0xFEEDFACECAFEBEEFULL;
    f->payload_crc = frame_mac(secret_cookie, d0, d1);
}

int guard_verify(const guarded_frame_t *f, uint64_t secret_cookie) {
    uint64_t exp_c = secret_cookie ^ 0xFEEDFACECAFEBEEFULL;
    uint64_t exp_m = frame_mac(secret_cookie, f->data[0], f->data[1]);
    return (f->magic_canary == exp_c && f->payload_crc == exp_m) ? 0 : -1;
}
