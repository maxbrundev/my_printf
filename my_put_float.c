#include "my_put_float.h"

#include "my_put_char.h"
#include "my_put_number.h"

unsigned int my_put_float(double p_number)
{
	int number = p_number;
	unsigned int devider = 1;

	unsigned int count = 0;

	if (number < 0)
	{
		count += my_put_char('-');
		number = -number;
	}

	while (number / devider > 9)
	{
		devider *= 10;
	}

	while (devider > 0)
	{
		count += my_put_number((number / devider) % 10);

		devider /= 10;
	}

	count += my_put_char('.');

	number = p_number * 100.0f;

	if(number < 0)
	{
		number = -number;
	}

	count += my_put_number((number / 10) % 10);

	count += my_put_number((number / 1) % 10);

	return count;
}
