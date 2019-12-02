/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:42:46 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/02 18:57:19 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_display_s(t_struct *tab)
{
	char	*str;
	int		i;

	str = (char *)va_arg(tab->arg, unsigned long int);
	if (tab->flag[1] == '0')
		return (-1);
	if (!str)
		str = "(null)";
	i = (tab->precision < ft_strlen(str) && tab->precision >= 0 ?
	tab->precision : ft_strlen(str));
	while (tab->width > i && tab->flag[0] != '-')
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	ft_putstr(tab, str);
	tab->width = (tab->width < 0 ? tab->width * -1 : tab->width);
	while (tab->width > i)
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	return (0);
}
