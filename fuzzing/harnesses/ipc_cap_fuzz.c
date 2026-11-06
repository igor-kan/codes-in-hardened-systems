#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

/**
 * LibFuzzer target harness for seL4-style IPC Capability & Message Descriptor parsing.
 * Instrumented for AddressSanitizer (ASan) and UndefinedBehaviorSanitizer (UBSan).
 */

typedef struct {
    uint32_t cap_tag;
    uint16_t msg_length;
    uint16_t flags;
    uint8_t payload[64];
} seL4_Fuzz_Msg_t;

static bool parse_ipc_message(const uint8_t *data, size_t size) {
    if (size < 8) return false;

    seL4_Fuzz_Msg_t msg;
    memset(&msg, 0, sizeof(msg));

    memcpy(&msg.cap_tag, data, 4);
    memcpy(&msg.msg_length, data + 4, 2);
    memcpy(&msg.flags, data + 6, 2);

    // Enforce bounds to prevent out-of-bounds heap read
    if (msg.msg_length > sizeof(msg.payload)) {
        return false;
    }

    if (size >= 8 + msg.msg_length) {
        memcpy(msg.payload, data + 8, msg.msg_length);
        return true;
    }

    return false;
}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    parse_ipc_message(data, size);
    return 0;
}
