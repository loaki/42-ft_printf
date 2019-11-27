/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 09:37:22 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/27 17:58:01 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(t_struct *tab)
{
	while (tab->format[tab->i])
	{
		if (tab->format[tab->i] == '%')
		{
			ft_reinitialize(tab);
			if (ft_treat(tab) == -1)
				return (-1);
		}
		else
		{
			write(1, &tab->format[tab->i], 1);
			tab->len++;
		}
		tab->i++;
	}
	return (tab->len);
}
