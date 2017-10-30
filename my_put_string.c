#include <stdio.h>

#include "my_put_string.h"
#include "my_put_char.h"

int my_put_string(char const* str)
{
	int t = 0;
	int nm = 0;

	if (str == NULL)
		return 0;

	while (str[t] != '\0')
	{	
		my_put_char(str[t]);
		t = t + 1;
		++nm;
	}

	return nm;
}