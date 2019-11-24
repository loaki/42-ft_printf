#include<stdio.h>

int main()
{
	char *str = "salut !";
	int i = -42;
	float f = -42.25;

	printf("-----s-----\n");
	printf("%s\n", str);
	printf("-----i-----\n");
	printf("%010i\n", i);
	printf("%10i\n", i);
	printf("%-10i\n", i);
	printf("%*i\n", 2, i);
	printf("-----f-----\n");
	printf("%.1f\n", f);
	printf("%.1f\n", -f);
	printf("-----p-----\n");
	printf("%p\n", str);
	printf("-----x-----\n");
	printf("-----retour-----\n");
	printf("%i\n", printf("   "));
}
