/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:43:51 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/28 23:47:49 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_bzero(char *str, int len)
{
	int i;

	i = 0;
	while (i != len)
	{
		str[i] = '0';
		i++;
	}
	str[i] = 0;
}

void			ft_putnbr(t_struct *tab, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		tab->len++;
		i++;
	}
}

static void		ft_truc(t_struct *tab, char *str)
{
	int i;

	i = 0;
	if (str[0] == '-' && tab->flag[1] == '0')
	{
		write(1, "-", 1);
		tab->width--;
		tab->len++;
		i++;
	}
	while (tab->width > ft_strlen(str))
	{
		if (tab->flag[1] == '0')
			write(1, "0", 1);
		else
			write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	ft_putnbr(tab, str);
}

static void		ft_width(t_struct *tab, char *str)
{
	if (tab->flag[0] == '-')
	{
		ft_putnbr(tab, str);
		while (tab->width > ft_strlen(str))
		{
			write(1, " ", 1);
			tab->width--;
			tab->len++;
		}
	}
	else if (tab->width > ft_strlen(str))
		ft_truc(tab, str);
	else
		ft_putnbr(tab, str);
}

int				ft_display_i(t_struct *tab)
{
	int				nb;
	unsigned int	unb;
	char			*str;

	nb = (int)va_arg(tab->arg, unsigned long int);
	if (tab->precision < ft_nblen(nb))
		tab->precision = ft_nblen(nb);
	if (nb < 0 && tab->precision > ft_nblen(nb))
		tab->precision++;
	if (!(str = malloc(tab->precision + 1)))
		return (-1);
	ft_bzero(str, tab->precision);
	str[0] = (nb < 0 ? '-' : '0');
	unb = (nb < 0 ? -nb : nb);
	while (unb != 0)
	{
		str[tab->precision - 1] = unb % 10 + '0';
		unb /= 10;
		tab->precision--;
	}
	ft_width(tab, str);
	free(str);
	return (0);
}
