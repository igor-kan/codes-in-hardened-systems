#ifndef SAFE_SNPRINTF_WRITER_INTERFACE_H
#define SAFE_SNPRINTF_WRITER_INTERFACE_H

#include "types.h"
#include "errors.h"

safe_snprintf_writer_err_t safe_snprintf_writer_init(safe_writer_t* w, char* buf, size_t cap);
safe_snprintf_writer_err_t safe_snprintf_writer_append_str(safe_writer_t* w, const char* s);
safe_snprintf_writer_err_t safe_snprintf_writer_append_u64(safe_writer_t* w, uint64_t val);
safe_snprintf_writer_err_t safe_snprintf_writer_check_invariants(const safe_writer_t* w);

#endif /* SAFE_SNPRINTF_WRITER_INTERFACE_H */
