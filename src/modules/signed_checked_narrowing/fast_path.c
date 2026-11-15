#include "interface.h"
size_t signed_checked_narrowing_sat_add_size(size_t a, size_t b) {
    return (a > SIZE_MAX - b) ? SIZE_MAX : (a + b);
}
