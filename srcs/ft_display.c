/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:43:30 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/26 17:35:12 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_display(t_struct *tab)
{
	printf("\n----display----\n");
	printf("format = %s\n", tab->format);
	printf("conv = %c\n", tab->format[tab->i]);
	printf("width = %i\n", tab->width);
	printf("precision = %i\n", tab->precision);
	printf("flag =\n- : %c\n0 : %c\n. : %c\n* : %c\n", 
	tab->flag[0], tab->flag[1], tab->flag[2], tab->flag[3]);
	return (0);
}
