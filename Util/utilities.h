#pragma once

// include commonly used standard headers
#include <stdint.h>
#include <vector>
#include <memory>
#include <string>
#include <iostream>

// redefine fixed size int's for less typing
typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

//macro to get the size of c style arrays
#define RAW_ARRAY_SIZE(X) (sizeof(x) / sizeof(x[0]))