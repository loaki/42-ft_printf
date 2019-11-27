#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_printf.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (-1);
		i++;
	}
	if (s1[i] != s2[i])
		return (-1);
	return (0);
}

void	ft_rescmp(char * s1, int len)
{
	int fd;
	int i;
	char s2[len + 1];

	fd = open("out.txt", O_RDONLY);
	i = 0;
	while (i <= (len + 1))
	{
		s2[i] = 0;
		i++;
	}
	read(fd, s2, len);
	if (!(ft_strcmp(s1, s2)))
	{
		freopen ("/dev/tty", "a", stdout); printf("\033[1;32m"); printf("OK\n");
	}
	else
	{
		freopen ("/dev/tty", "a", stdout); printf("\033[1;31m"); printf("KO\n");
	}
}

void	ft_test(char *str, void *conv, char c)
{
	FILE *out = freopen("./out.txt", "w", stdout);
	int len;
	char *s1;

	if (c == 's')
		(char *)conv;
	if (c == 'c')
		(char)conv;
	if (c == 'p')
		(int *)conv;
	if (c == 'd' || c == 'i' || c == 'x' || c == 'X')
		(int)conv;
	if (c == 'u')
		(unsigned int)conv;
	ft_printf(str, conv);
	len = snprintf(NULL, 0, str, conv);
	s1 = malloc(len + 1);
	snprintf(s1, len + 1, str, conv);
	ft_rescmp(s1, len);
}

int main()
{
	char *str = "ca marche !";
	char c = 'z';
	int i = 42;
	int i2 = 0;
	int i3 = -42;
	int *p = &i;
	unsigned int u = 394;

	ft_test("%s", str, 's');
	ft_test("%c", c, 'c');
	ft_test("%p", p, 'p');
	ft_test("%i", i, 'i');
	ft_test("%d", i2, 'd');
	ft_test("%i", i3, 'i');
	ft_test("%x", i, 'x');
	ft_test("%X", i, 'X');
	ft_test("%u", u, 'u');

	ft_test("%05i", i, 'i');
	ft_test("%.-5i", i, 'i');
	ft_test("%.-5i", i, 'i');

//	freopen ("/dev/tty", "a", stdout); printf("\033[0m"); printf("%-5i", i);
	return (0);
}
