#include "my_put_string.h"

#include "my_put_char.h"

unsigned int my_put_string(const char* p_string)
{
	unsigned int count = 0;

	while (*p_string != '\0')
	{
		count += my_put_char(*p_string);

		p_string++;
	}

	return count;
}
