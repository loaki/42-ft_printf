#include<stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char *str = "salut";
	char *str2 = NULL;
	char *str3 = "";
	int i = -42;
	float f = -42.25;
	int *p = &i;
	char c = 0;
	printf("i=%i\n", printf("---%9s---\n", str2));
/*	printf("-----str-----\n");
	printf("pc=%p\n", p);
	printf("015=%015p\n", p);
	printf("15=%15p\n", p);
	printf("-15=%-15p\n", p);
	printf(".15=%.15p\n", p);
	printf(".*-15=%.*p\n", -15, p);
	printf(".015=%.015p\n", p);
	printf("-15.*-21=%-15.*p\n", -21, p);
	printf("015.21=%015.21p\n", p);*//*
	printf("-----s-----\n");
	printf("%s\n", str);
	printf("-----i-----\n");
	printf("%010i\n", i);
	printf("%10i\n", i);
	printf("%-10i\n", i);
	printf("%*i\n", 2, i);
	printf("%-i\n", i);
	printf("%+i\n", i);
	printf("% i\n", i);
	printf("%10.5i\n", i);
	printf("-----f-----\n");
	printf("%.1f\n", f);
	printf("%.1f\n", -f);*/
/*	printf("-----x-----\n");
	printf("-----%%-----\n");
	printf("%%\n");
	printf("-----retour-----\n");
	printf("%i\n", printf("   "));
	printf("-----flag-----\n");
	printf("%-9i\n", i);
	printf("%9i\n", i);
	printf("%09i\n", i);
	printf("%09i\n", i);*/
	return (0);
}
