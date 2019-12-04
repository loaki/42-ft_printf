/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:52:10 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/04 19:54:57 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_display_c(t_struct *tab)
{
	char c;

	c = (char)va_arg(tab->arg, long int);
	if (tab->precision > 0 || tab->flag[1] == '0')
		return (-1);
	while (tab->width > 1 && tab->flag[0] != '-')
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	write(1, &c, 1);
	tab->len++;
	if (tab->width < 0)
		tab->width *= -1;
	while (tab->width > 1)
	{
		write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	return (0);
}
