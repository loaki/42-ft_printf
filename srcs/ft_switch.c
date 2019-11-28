/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:25:52 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/28 21:32:26 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_switch(t_struct *tab)
{
	if (tab->format[tab->i] == 'c')
		return (ft_display_c(tab));//afer
	if (tab->format[tab->i] == 's')
		return (ft_display_s(tab));//afer
	if (tab->format[tab->i] == 'p')
		return (ft_display_p(tab));//afer
	if (tab->format[tab->i] == 'd' || tab->format[tab->i] == 'i')
		return (ft_display_i(tab));//afer
/*	if (tab->format[tab->i] == 'u')
		return (ft_display_u(tab));//afer
	if (tab->format[tab->i] == 'x')
		return (ft_display_x(tab));//afer
	if (tab->format[tab->i] == 'X')
		return (ft_display_X(tab));//afer
	if (tab->format[tab->i] == '%')
		return (ft_display_pc(tab));//afer*/
	return (-1);
}
