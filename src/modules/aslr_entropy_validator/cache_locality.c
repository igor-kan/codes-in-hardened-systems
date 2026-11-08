/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#define ASLR_ENTROPY_VALIDATOR_CACHE_LINE_SIZE 64
#define ASLR_ENTROPY_VALIDATOR_L1_TILE_SIZE 32

void aslr_entropy_validator_cache_tiled_transform(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += ASLR_ENTROPY_VALIDATOR_L1_TILE_SIZE) {
        size_t r_end = (r + ASLR_ENTROPY_VALIDATOR_L1_TILE_SIZE < rows) ? r + ASLR_ENTROPY_VALIDATOR_L1_TILE_SIZE : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.0001;
            }
        }
    }
}
