#include <stdio.h>
int main()
{
	int o;
	int *p;
	o = 42;
	p = &o;
	printf("printf=%p\n", p);
	char str[10];
	char *base;
	int i;
	long int pointeur;
	pointeur = (long int)p;
	printf("pointeur=%li\n", pointeur);
	i = 8;
	base = "0123456789abcdef";
	while (i >= 0 && (pointeur / 16) > 0)
	{
		str[i] = base[pointeur % 16];
		pointeur /= 16;
		i--;
	}	
	printf("str=%s\n", str);
	return (0);
}
