/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 10:31:38 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/25 12:46:49 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat(t_tab *tab)
{
	tab->i++;
	ft_parse_flag(tab);
	return (tab->len);
}
