#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int i = 0;
	int i2 = 420;
	int i3 = -42;
	int i4 = -2147483648;
	int i5 = 2147483647;

	ft_printf("f=%i\n", i3);
	printf("v=%i\n", i3);
	ft_printf("f=%10.5i\n", i);
	printf("v=%10.5d\n", i);
	ft_printf("f=%5.20i\n", i2);
	printf("v=%5.20d\n", i2);
	ft_printf("f=%-10.6i\n", i3);
	printf("v=%-10.6d\n", i3);
	ft_printf("f=%010.21i\n", i4);
	printf("v=%010.21d\n", i4);
	ft_printf("f=%10.*i\n", -5, i5);
	printf("v=%10.*d\n", -5, i5);
	ft_printf("f=%-10.3i\n", i2);
	printf("v=%-10.3d\n", i2);
	ft_printf("f=%-10.5i\n", i2);
	printf("v=%-10.5d\n", i2);
	return (0);
}
