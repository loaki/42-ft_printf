/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:52:48 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/05 17:12:58 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_display_n(t_struct *tab)
{
	int *n;

	n = (int *)va_arg(tab->arg, unsigned long int);
	if (!n)
		return (-1);
	*n = tab->len;
	return (0);
}
