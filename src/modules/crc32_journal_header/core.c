#include "interface.h"
#include <string.h>

static void write_le32(uint8_t* p, uint32_t v) {
    p[0]=(uint8_t)v; p[1]=(uint8_t)(v>>8); p[2]=(uint8_t)(v>>16); p[3]=(uint8_t)(v>>24);
}
static void write_le16(uint8_t* p, uint16_t v) {
    p[0]=(uint8_t)v; p[1]=(uint8_t)(v>>8);
}
static uint32_t read_le32(const uint8_t* p) {
    return (uint32_t)p[0] | ((uint32_t)p[1]<<8) | ((uint32_t)p[2]<<16) | ((uint32_t)p[3]<<24);
}
static uint16_t read_le16(const uint8_t* p) {
    return (uint16_t)((uint16_t)p[0] | ((uint16_t)p[1]<<8));
}

uint32_t jhdr_crc32(const uint8_t* data, size_t len) {
    uint32_t crc = 0xFFFFFFFFU;
    for (size_t i = 0; i < len; ++i) {
        crc ^= data[i];
        for (int b = 0; b < 8; ++b) {
            uint32_t mask = (uint32_t)(-(int32_t)(crc & 1U));
            crc = (crc >> 1) ^ (0xEDB88320U & mask);
        }
    }
    return ~crc;
}

crc32_journal_header_err_t jhdr_seal(uint16_t version, uint16_t flags, const uint8_t* payload, size_t payload_len, uint8_t* frame_out, size_t cap, size_t* total_len) {
    if (!frame_out || !total_len || (payload_len > 0 && !payload)) return CRC32_JOURNAL_HEADER_ERR_NULL;
    if (payload_len > (size_t)UINT32_MAX - JHDR_SIZE || cap < JHDR_SIZE + payload_len) return CRC32_JOURNAL_HEADER_ERR_BOUNDS;
    uint32_t pcrc = (payload_len > 0) ? jhdr_crc32(payload, payload_len) : jhdr_crc32((const uint8_t*)"", 0);
    write_le32(frame_out + 0, JHDR_MAGIC);
    write_le16(frame_out + 4, version);
    write_le16(frame_out + 6, flags);
    write_le32(frame_out + 8, (uint32_t)payload_len);
    write_le32(frame_out + 12, pcrc);
    uint32_t hcrc = jhdr_crc32(frame_out, 16);
    write_le32(frame_out + 16, hcrc);
    if (payload_len > 0) memcpy(frame_out + JHDR_SIZE, payload, payload_len);
    *total_len = JHDR_SIZE + payload_len;
    return CRC32_JOURNAL_HEADER_OK;
}

crc32_journal_header_err_t jhdr_verify_frame(const uint8_t* frame, size_t frame_len, size_t max_payload, jhdr_t* hdr_out) {
    if (!frame || !hdr_out) return CRC32_JOURNAL_HEADER_ERR_NULL;
    if (frame_len < JHDR_SIZE) return CRC32_JOURNAL_HEADER_ERR_BOUNDS;
    uint32_t magic = read_le32(frame);
    if (magic != JHDR_MAGIC) return CRC32_JOURNAL_HEADER_ERR_INVALID;
    uint32_t hcrc = read_le32(frame + 16);
    if (jhdr_crc32(frame, 16) != hcrc) return CRC32_JOURNAL_HEADER_ERR_INVARIANT;
    uint32_t plen = read_le32(frame + 8);
    if (plen > max_payload || plen > frame_len - JHDR_SIZE || frame_len != JHDR_SIZE + plen) {
        return CRC32_JOURNAL_HEADER_ERR_BOUNDS;
    }
    uint32_t pcrc = read_le32(frame + 12);
    if (jhdr_crc32(frame + JHDR_SIZE, plen) != pcrc) return CRC32_JOURNAL_HEADER_ERR_INVARIANT;
    hdr_out->magic = magic;
    hdr_out->version = read_le16(frame + 4);
    hdr_out->flags = read_le16(frame + 6);
    hdr_out->payload_len = plen;
    hdr_out->payload_crc = pcrc;
    hdr_out->header_crc = hcrc;
    return CRC32_JOURNAL_HEADER_OK;
}
