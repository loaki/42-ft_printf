#include "ft_printf.h"
#include <stdio.h>

int main()
{
//	int i = 0;
//	unsigned int ui = 0;
//	int i2 = 420;
//	unsigned int ui2 = 420;
//	int i3 = -42;
//	unsigned int ui3 = -42;
//	int i4 = -2147483648;
//	unsigned int ui4 = -2147483648;
//	int i5 = 2147483647;
	unsigned int u5 = 2147483660;

	printf("vi=%0-10.5u\n", u5);
	ft_printf("fi=%0-10.5u\n", u5);
	return (0);
}
