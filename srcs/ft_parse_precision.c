/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:45:56 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/26 17:24:04 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_precision(t_struct *tab)
{
	if (tab->precision != -1)
		return ;
	if (tab->flag[2] != '.')
		return ;
	if (tab->format[tab->i] != '*')
	{
		tab->precision = ft_parse_number(tab);
		return ;
	}
	tab->precision = va_arg(tab->arg, int);
	tab->i++;
}
