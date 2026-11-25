#include "interface.h"
#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec t0, t1;
    const uint8_t raw[8] = {0, 1, 0, 2, 3, 0, 4, 0};
    uint8_t enc[16], dec[16]; size_t nd = 0;
    timespec_get(&t0, TIME_UTC);
    volatile int64_t sink = 0;
    for (int iter = 0; iter < 500; ++iter) {
        size_t ne = cobs_encode_d60(raw, 8, enc, 16);
    cobs_decode_d60(enc, ne, dec, 16, &nd);
    sink = sink + (int64_t)nd;
    }
    timespec_get(&t1, TIME_UTC);
    double us = (double)(t1.tv_sec - t0.tv_sec) * 1e6 + (double)(t1.tv_nsec - t0.tv_nsec) * 1e-3;
    printf("cobs_packet_codec_d60 us=%.1f sink=%lld\n", us, (long long)sink);
    return 0;
}
