#include <limits.h>
#include "my_printf.h"

int main()
{
	int nm = 0;

	my_printf("string\n");
	my_printf("Array:%s\n", "string");
	my_printf("Char:%c\n", 'A');
	my_printf("Int_Min:%d\n", INT_MIN);
	my_printf("Int_Max:%d\n", INT_MAX);
	my_printf("Uint_Max:%u\n", UINT_MAX);
	my_printf("Float:%f\n", 10.01515156846848464654658486648646468468f);

	nm = my_printf("my printf\n");
	my_printf("%d characters", nm);


	return 0;
}
