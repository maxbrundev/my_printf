#include "my_put_number.h"

#include "my_put_char.h"

unsigned int my_put_number(int p_number)
{
	unsigned int devider = 1;

	unsigned int count = 0;

	if(p_number < 0)
	{
		count += my_put_char('-');
		p_number = -p_number;
	}

	while (p_number / devider > 9)
	{
		devider *= 10;
	}

	while (devider > 0)
	{
		count += my_put_char('0' + (p_number / devider) % 10);

		devider /= 10;
	}

	return count;
}

unsigned my_put_unsigned_number(unsigned int p_number)
{
	unsigned int devider = 1;

	unsigned int count = 0;

	while (p_number / devider > 9)
	{
		devider *= 10;
	}

	while (devider > 0)
	{
		count += my_put_char('0' + (p_number / devider) % 10);

		devider /= 10;
	}

	return count;
}
