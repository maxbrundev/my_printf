#include "string_length.h"

unsigned int string_length(const char* p_string)
{
	unsigned int count = 0;

	while (*p_string != '\0')
	{
		count++;

		p_string++;
	}

	return count;
}
