/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:13:13 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/26 17:24:17 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_width(t_struct *tab)
{
	if (tab->width != -1)
		return ;
	if (tab->format[tab->i] != '*')
	{
		tab->width = ft_parse_number(tab);
		return ;
	}
	tab->width = va_arg(tab->arg, int);
	tab->i++;
}
