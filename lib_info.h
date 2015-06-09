#ifndef LIB_INFO_H__
#define LIB_INFO_H__

#include <stdint.h>
#include "sequence_package.h"

struct lib_info_t {
	SequencePackage *p;
	int64_t from;
	int64_t to;
	bool is_pe;

	lib_info_t(SequencePackage *p = NULL, int64_t from = 0, int64_t to = 0, bool is_pe = false):
		p(p), from(from), to(to), is_pe(is_pe) { }
	~lib_info_t() { }
};

#endif