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

#define RAW_ARRAY_SIZE(X) (sizeof(x) / sizeof(x[0]))

// -----------------------console stuff-----------------------

// clears the console screen but does not move the cursor position to the beginning
#define CLEAR_SCREEN printf("\033[2J");

// moves the cursor to the beginning of the screen
#define CURSOR_HOME printf("\033[H");

// clears the console and moves the cursor to the beginning.
#define CLEAR printf("\033[2J\033[H");

// debug loggers
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

#endif // _DEBUG