#pragma once

// c standard headers
#include <stdint.h>

// c++ standard headers
#include <vector>
#include <memory>
#include <string>
#include <iostream>

// redefine primitives for less typing
typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float    f32;
typedef double   f64;

// useful macros
#define RAW_ARRAY_SIZE(X) (sizeof(x) / sizeof(x[0]))

#ifdef _DEBUG

	#define DEBUG_ERROR_LOG(msg) std::cout << "[\x1B[31mError\033[0m]   File: " << __FILE__ << " Line: " << __LINE__ << " Message: " << msg << std::endl;
	#define DEBUG_WARNING_LOG(msg) std::cout << "[\x1B[33mWarning\033[0m] File: " << __FILE__ << " Line: " << __LINE__ << " Message: " << msg << std::endl;
	#define DEBUG_INFO_LOG(msg) std::cout << "[\x1B[34mInfo\033[0m]    File: " << __FILE__ << " Line: " << __LINE__ << " Message: " << msg << std::endl;
	#define DEBUG_SUCCESS_LOG(msg) std::cout << "[\x1B[32mSuccess\033[0m] File: " << __FILE__ << " Line: " << __LINE__ << " Message: " << msg << std::endl;

#else
	
	#define DEBUG_ERROR_LOG(msg)
	#define DEBUG_WARNING_LOG(msg)
	#define DEBUG_INFO_LOG(msg)
	#define DEBUG_SUCCESS_LOG(msg)

#endif // DEBUG