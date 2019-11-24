#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

/*
** format: string (first ft_printf parameter).
** f_copy: copy of format.
** f_treat: copy of format.
** args: stores caradic arguments.
** len: ft_printf return value (number of printed characters).
** i: position of read in format string.
** masks contain strings of chars for the respective flags, used for matching.
*/

typedef struct	s_tab
{
	const char	*format;
//	char		*f_copy;
//	char		*f_treat;
	va_list		args;
//	int			len;
//	size_t		i;
//	long int	precision;
//	long int	field_width;
//	char		specifier_flag;
//	char		convert[6];
//	char		argument_flag[2];
//	char		*specifier_mask;
//	char		*converter_mask;
//	char		*argument_mask;
}				t_tab;

// cspdiuxX%
// -0.*
int ft_printf(const char *, ...)
{
	t_tab *tab;

	if (!(tab = (t_tab*)malloc(sizeof(t_tab))))
		return (-1);
	tab->format = format;
	if (format)
	{
		va_start(tab->args, format);
		tab->len = parser(tab);
		va_end(tab->args);
		printf(
	}
	free(tab);
	return (tab->len);
}

int main()
{
	char *str = "pouet";
	ft_printf(str, truc, pouet);
	printf
}







