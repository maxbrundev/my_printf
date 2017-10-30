#include <stdio.h>

#include"my_put_char.h"

int my_put_char (char c)
{
 	fwrite (&c, sizeof(char), 1, stdout);

	return 1;
}
