#include "ft_printf.h"
#include <stdio.h>

int main()
{
printf("v%*i", -14, 94827);
printf("\n");
ft_printf("f%*i", -14, 94827);

//printf("hello ca%----4c %1c%10c%-c ??", '\0', '\n', (char)56, 0);
//	printf("\n");
//	ft_printf("hello ca%----4c %1c%10c%-c ??", '\0', '\n', (char)56, 0);
}

