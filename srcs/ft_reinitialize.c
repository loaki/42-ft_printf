/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reinitialize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 10:56:11 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/26 18:07:29 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_reinitialize(t_struct *tab)
{
	tab->precision = -1;
	tab->width = 0;
	tab->conv[0] = 0;
	tab->conv[1] = 0;
	tab->conv[2] = 0;
	tab->conv[3] = 0;
	tab->conv[4] = 0;
	tab->conv[5] = 0;
	tab->conv[6] = 0;
	tab->conv[7] = 0;
	tab->conv[8] = 0;
	tab->flag[0] = 0;
	tab->flag[1] = 0;
	tab->flag[2] = 0;
	tab->flag[3] = 0;
}
