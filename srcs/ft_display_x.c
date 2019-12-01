/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:21:52 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/01 16:28:54 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_putnbr(t_struct *tab, char *str, int i)
{
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
	if (str[0] == '-' && tab->flag[1] == '0' && (tab->width < tab->precision ||
		tab->flag[2] != '.'))
	{
		write(1, "-", 1);
		tab->len++;
		i++;
	}
	while (tab->width > ft_strlen(str))
	{
		if (tab->flag[1] == '0' && (tab->width < tab->precision ||
			tab->flag[2] != '.'))
			write(1, "0", 1);
		else
			write(1, " ", 1);
		tab->width--;
		tab->len++;
	}
	ft_putnbr(tab, str, i);
}

static void		ft_width(t_struct *tab, char *str)
{
	int i;

	i = tab->width;
	if (tab->flag[0] == '-')
	{
		ft_putnbr(tab, str, 0);
		while (i > ft_strlen(str))
		{
			write(1, " ", 1);
			i--;
			tab->len++;
		}
	}
	else if (tab->width > ft_strlen(str))
		ft_truc(tab, str);
	else
		ft_putnbr(tab, str, 0);
}

static void		ft_precision(t_struct *tab, char *str, int s)
{
	int i;
	int hexlen;
	int preci;

	hexlen = ft_strlen(str) - s;
	preci = (tab->precision < hexlen ? hexlen : tab->precision);
	i = 0;
	while (i < (preci))
	{
		str[i] = str[ft_strlen(str) - (preci - i)];
		i++;
	}
	str[i] = 0;
}

int				ft_display_x(t_struct *tab)
{
	unsigned int	nb;
	char			*str;
	char			*base;
	int				i;

	base = (tab->format[tab->i] == 'x' ? "0123456789abcdef"
	: "0123456789ABCDEF");
	tab->precision = (tab->precision < 0 ? 0 : tab->precision);
	nb = (unsigned int)va_arg(tab->arg, unsigned long int);
	if (!(str = malloc(tab->precision + 9)))
		return (-1);
	i = tab->precision + 9;
	ft_bzero(str, i - 1);
	if (nb == 0 && tab->precision < 1)
		tab->precision = 1;
	while (nb != 0 || (nb / 16) > 0)
	{
		str[i] = base[nb % 16];
		nb /= 16;
		i--;
	}
	ft_precision(tab, str, (i + 1));
	ft_width(tab, str);
	free(str);
	return (0);
}
