#include "ft_printf.h"

int main()
{
static int a = 32;

printf("%p\n", &a);
ft_printf("%p\n", &a);

//printf("hello ca%----4c %1c%10c%-c ??", '\0', '\n', (char)56, 0);
//	printf("\n");
//	ft_printf("hello ca%----4c %1c%10c%-c ??", '\0', '\n', (char)56, 0);
}

