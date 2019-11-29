/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:25:02 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 18:28:05 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_display(t_struct *tab)
{
	printf("format=%s\n", tab->format);
	printf("len=%i\n", tab->len);
	printf("i=%i\n", tab->i);
	printf("preci=%i\n", tab->precision);
	printf("width=%i\n", tab->width);
	printf("flag-=%c\n", tab->flag[0]);
	printf("flag0=%c\n", tab->flag[1]);
	printf("flag.=%c\n", tab->flag[2]);
	printf("flag*=%c\n", tab->flag[3]);
}

