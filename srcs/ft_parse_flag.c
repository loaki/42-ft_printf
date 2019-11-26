/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 10:41:56 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/26 18:20:55 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_flag(t_struct *tab)
{
	if (tab->format[tab->i] == '-')
	{
		tab->flag[0] = '-';
		tab->i++;
		return ;
	}
	if (tab->format[tab->i] == '0')
	{
		tab->flag[1] = '0';
		tab->i++;
		return ;
	}
	if (tab->format[tab->i] == '.')
	{
		tab->flag[2] = '.';
		tab->i++;
		return ;
	}
	if (tab->format[tab->i] == '*')
	{
		tab->flag[3] = '*';
		return ;
	}
}
