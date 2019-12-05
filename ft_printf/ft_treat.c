/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 10:31:38 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/05 17:08:45 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat(t_struct *tab)
{
	tab->i++;
	while (tab->format[tab->i] != 0 && tab->format[tab->i] != 'c' &&
		tab->format[tab->i] != 's' && tab->format[tab->i] != 'p' &&
		tab->format[tab->i] != 'd' && tab->format[tab->i] != 'i' &&
		tab->format[tab->i] != 'u' && tab->format[tab->i] != 'x' &&
		tab->format[tab->i] != 'X' && tab->format[tab->i] != '%' &&
		tab->format[tab->i] != 'n')
	{
		ft_parse_flag(tab);
		ft_parse_precision(tab);
		ft_parse_width(tab);
	}
	return (ft_switch(tab));
}
