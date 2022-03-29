#include "my_put_char.h"

#include <stdio.h>

unsigned int my_put_char(const char p_char)
{
	fwrite(&p_char, sizeof(char), 1, stdout);

	return (p_char == '\n') ? 0 : 1;
}
