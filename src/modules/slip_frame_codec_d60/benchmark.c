#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    const uint8_t raw[8] = {1, 0xc0, 2, 0xdb, 3, 4, 0xc0, 5};
    uint8_t enc[32], dec[16]; size_t nd = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        size_t ne = slip_encode_d60(raw, 8, enc, 32);
    slip_decode_d60(enc, ne, dec, 16, &nd);
    sink = sink + (int64_t)nd;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("slip_frame_codec_d60 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
