#include "my_put_float.h"
#include "my_put_number.h"
#include "my_put_char.h"

int my_put_float(double num)
{
	int temp = num;
	int div = 1;
	int nm = 0;
	
	if (temp < 0)
	{
		my_put_char('-');
		temp = -temp;
		++nm;
	}

	while (temp / div > 9 || temp / div < -9)
		div = div * 10;

	while (div >= 1)
	{
		if (temp > 0)
			my_put_number((temp / div) % 10);
		else
			my_put_number((temp / div) % 10);
		div = div / 10;
		++nm;
	}

	my_put_char('.');
	++nm;

	temp = num * 100;

	my_put_number((temp / 10) % 10);
	++nm;
	my_put_number((temp / 1) % 10);
	++nm;

	return nm;
}