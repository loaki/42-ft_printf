/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:25:52 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/02 12:36:13 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_switch(t_struct *tab)
{
	if (tab->format[tab->i] == 'c')
		return (ft_display_c(tab));
	if (tab->format[tab->i] == 's')
		return (ft_display_s(tab));
	if (tab->format[tab->i] == 'p')
		return (ft_display_p(tab));
	if (tab->format[tab->i] == 'd' || tab->format[tab->i] == 'i')
		return (ft_display_i(tab));
	if (tab->format[tab->i] == 'u')
		return (ft_display_u(tab));
	if (tab->format[tab->i] == 'x' || tab->format[tab->i] == 'X')
		return (ft_display_x(tab));
	if (tab->format[tab->i] == '%')
		return (ft_display_pc(tab));
	return (-1);
}
