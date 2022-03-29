#include "my_printf.h"

#include <stddef.h>

#include "string_length.h"
#include "my_put_char.h"
#include "my_put_string.h"
#include "my_put_number.h"
#include "my_put_float.h"

unsigned int my_printf(const char* p_string, ...)
{
	if(p_string == NULL)
	{
		return 0;
	}

	unsigned int count = string_length(p_string);

	va_list args;

	va_start(args, p_string);

	count += parse(p_string, args);

	va_end(args);

	return count;
}

unsigned int parse(const char* p_string, va_list p_args)
{
	unsigned int count = 0;

	while (*p_string != '\0')
	{
		if (*p_string == '%')
		{
			p_string++;

			switch (*p_string)
			{
			case 's':
				count += my_put_string(va_arg(p_args, char*));
				break;
			case 'c':
				count += my_put_char(va_arg(p_args, int));
				break;
			case 'i':
			case 'd':
				count += my_put_number(va_arg(p_args, int));
				break;
			case 'u':
				count += my_put_unsigned_number(va_arg(p_args, unsigned int));
				break;
			case 'f':
				count += my_put_float(va_arg(p_args, double));
				break;
			case '%':
				my_put_char(*p_string);
				break;
			default: 
				break;
			}
		}
		else
		{
			my_put_char(*p_string);
		}

		p_string++;
	}

	return count;
}
