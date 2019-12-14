
// This file is a part of MRNIU/SimpleKernel (https://github.com/MRNIU/SimpleKernel).
//
// assert.h for MRNIU/SimpleKernel.

#ifndef _ASSERT_H_
#define _ASSERT_H_
#include "stdio.h"

#define assert(test) \
		if(!(test)) { \
				printk_err("ASSERT ERROR!"); \
				while(1); \
		}

#endif /* _ASSERT_H_ */