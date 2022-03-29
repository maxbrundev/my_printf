#include <stdio.h>
#include <limits.h>

#include "my_printf.h"

int main()
{
	my_printf("Hello World\n");

	my_printf("string: %s\n", "Hello World");

	my_printf("char: %c\n", 'a');

	my_printf("int max: %d\n", INT_MAX);
	my_printf("int min: %d\n", INT_MIN);

	my_printf("unsigned int max: %u\n", UINT_MAX);

	my_printf("float: %f\n", 150.50f);
	my_printf("signed float: %f\n", -150.50f);

	unsigned int count = my_printf("test\n");

	my_printf("%u characters\n", count);

	my_printf("Percentage test %d%%\n", 100);

	getchar();

	return 0;
}
