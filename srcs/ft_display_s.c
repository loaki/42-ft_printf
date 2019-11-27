/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:42:46 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/27 19:22:36 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	return (0);
}
