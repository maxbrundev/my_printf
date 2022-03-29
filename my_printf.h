#pragma once

#ifndef MY_PRINTF
#define MY_PRINTF

#include <stdarg.h>

unsigned int my_printf(const char* p_string, ...);

unsigned int parse(const char* p_string, va_list args);

#endif
