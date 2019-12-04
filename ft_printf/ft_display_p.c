/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:27:46 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/04 18:27:56 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puts(t_struct *tab, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		tab->len++;
	}
}

static int	ft_strcmp(char *s1, char *s2)
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

static char	*ft_strjoin(char *str)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 2;
	if (!(ret = (char *)malloc(40)))
		return (NULL);
	while (str[i] == '0')
		i++;
	ret[0] = '0';
	ret[1] = 'x';
	while (str[i])
	{
		ret[j++] = str[i];
		i++;
	}
	ret[i + 2] = 0;
	return (ret);
}

static char	*ft_strhexa(t_struct *tab)
{
	long int	p;
	char		*base;
	char		str[13];
	int			i;

	p = (long int)va_arg(tab->arg, unsigned long int);
	if (!p)
		return ((tab->flag[2] == '.' ? "0x" : "0x0"));
	base = "0123456789abcdef";
	i = 11;
	str[12] = 0;
	while (i >= 0 || (p / 16) > 0)
	{
		str[i] = base[p % 16];
		p /= 16;
		i--;
	}
	return (ft_strjoin(str));
}

int			ft_display_p(t_struct *tab)
{
	char *str;

	str = ft_strhexa(tab);
	if (tab->flag[1] == '0')
		return (-1);
	while (tab->width > ft_strlen(str) && tab->flag[0] != '-')
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	ft_puts(tab, str);
	if (tab->width < 0)
		tab->width *= -1;
	while (tab->width > ft_strlen(str))
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	if (ft_strcmp(str, "0x") && ft_strcmp(str, "0x0"))
		free(str);
	return (0);
}
