/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_pc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:17:22 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/01 15:43:15 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_display_pc(t_struct *tab)
{
	while (tab->width > 1 && tab->flag[0] != '-')
	{
		if (tab->flag[1] == '0')
			write(1, "0", 1);
		else
			write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	write(1, "%", 1);
	tab->len++;
	if (tab->width < 0)
		tab->width *= -1;
	while (tab->width > 1)
	{
		if (tab->flag[1] == '0')
			write(1, "0", 1);
		else
			write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	return (0);
}
