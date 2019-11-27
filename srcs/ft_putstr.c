/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:05:41 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/27 17:44:27 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(t_struct *tab, char *str)
{
	int i;

	i = 0;
	if (tab->precision < 0)
		while (str[i])
		{
			write(1, &str[i], 1);
			tab->len++;
			i++;
		}
	else
		while (str[i] != 0 && tab->precision > 0)
		{
			write(1, &str[i], 1);
			tab->len++;
			tab->precision--;
			i++;
		}
}
