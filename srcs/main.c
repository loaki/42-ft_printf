#include "ft_printf.h"

int main()
{
	int i;
	i = 42;

	ft_printf("salut %-*.*d yo %09d", 5, 6, i, i);
}
