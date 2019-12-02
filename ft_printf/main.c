#include <stdio.h>
#include "ft_printf.h"

int main()
{
//	int a = 9;
//	int b = 9;
//	int c = 345634;
//	int *p1 = &a;
//	int *p2 = &b;
//	int *p3 = &c;
	printf("v=%.*s\n", -3, "hello");
	ft_printf("f=%.*s\n", -3, "hello");
}
