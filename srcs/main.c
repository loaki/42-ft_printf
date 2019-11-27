#include "ft_printf.h"

int main()
{
	char c = 'a';
	char w = 'g';
	int i;
	i = ft_printf("salut %*c %7c\n", -2, c, w);
	ft_printf("%c\n", c);
	i = printf("silut %*c %7c\n", -2, c, w);
	printf("%i\n", i);
}
