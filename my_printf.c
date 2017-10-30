#include <stdio.h>
#include <stdarg.h>

#include "parse.h"

int my_printf(const char* str, ...)
{
	if(str == NULL)
		return 0;

	int nm = 0;

	va_list args;
	va_start(args, str);

	nm = parse(args, str);

	va_end(args);

	return nm;
}
