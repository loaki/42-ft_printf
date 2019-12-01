/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:01:55 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/26 17:19:19 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parse_number(t_struct *tab)
{
	int nb;

	nb = 0;
	while (tab->format[tab->i] <= '9' && tab->format[tab->i] >= '0')
	{
		nb *= 10;
		nb += tab->format[tab->i] - '0';
		tab->i++;
	}
	if (nb == 0)
		return (-1);
	return (nb);
}
