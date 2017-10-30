#include "parse.h"
#include "my_put_char.h"
#include "my_put_string.h"
#include "my_put_number.h"
#include "my_put_unsigned.h"
#include "my_put_float.h"

int parse(va_list args, const char * str)
{
	int element = 0;
	int nm = 0;

    while(str[element] != '\0')
	{
		if(str[element] == '%')
		{
			element++;

			switch(str[element])
			{
				case 'i':
				case 'd':
                    nm += my_put_number(va_arg(args, int));
                    ++element;
                    break;

				case 'c':
                    nm += my_put_char(va_arg(args, int));
                    ++element;
                    break;

				case 's':
                    nm += my_put_string(va_arg(args, const char*));
                    ++element;
                    break;

				case 'f':
                    nm += my_put_float(va_arg(args, double));
                    ++element;
                    break;

				case 'u':
                    nm += my_put_unsigned(va_arg(args, unsigned int));
                    ++element;
                    break;

				case '%':
                    nm += my_put_char('%');
                    ++element;
                    break;

				default:
                    my_put_char(str[element]);
                    ++element;
			}
		}
		else
		{
			nm += my_put_char(str[element]);
			element++;
		}
	}

	return nm;
}