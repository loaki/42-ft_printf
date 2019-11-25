/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 09:34:22 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/25 12:46:45 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_struct *tab;

	if (!(tab = (t_struct*)malloc(sizeof(t_struct))))
		return (-1);
	tab->format = format;
	ft_initialize(tab);
	if (format)
	{
		va_start(tab->arg, format);
		tab->len = ft_parser(tab);
		va_end(tab->arg);
	}
	free(tab);
	return (tab->len);
}
