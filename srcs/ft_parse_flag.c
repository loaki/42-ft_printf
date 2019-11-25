/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 10:41:56 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/25 12:46:56 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_flag(t_struct *tab)
{
	int j;

	j = 0;
	while (tab->flag_mask[j])
	{
		while (tab->flag_mask[j] == tab->format[tab->i])
		{
			while (tab->format[tab->i] == '-' && tab->i++)
				tab->flag[0] = '-';
			while (tab->format[tab->i] == '0' && tab->i++)
				tab->flag[1] = '0';
			while (tab->format[tab->i] == '.' && tab->i++)
				tab->flag[2] = '.';
			while (tab->format[tab->i] == '*' && tab->i++)
				tab->flag[3] = '*';
			j = 0;
		}
		j++;
	}
}
