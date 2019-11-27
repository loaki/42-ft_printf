/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:42:46 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/27 18:45:28 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int			ft_display_s(t_struct *tab)
{
	char *str;

	str = (char *)va_arg(tab->arg, unsigned long int);
	if (tab->flag[1] == '0')
		return (-1);
	if (!str)
		str = "(null)";
	while (tab->width > ft_strlen(str) && tab->flag[0] != '-')
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	ft_putstr(tab, str);
	if (tab->width < 0 && !str)
		tab->width *= -1;
	while (tab->width > ft_strlen(str))
	{
		printf("wtf??\n");
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	return (0);
}
