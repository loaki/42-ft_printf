/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 22:21:52 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/06 15:56:30 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_putnbr(t_struct *tab, char *str, int i)
{
	if (str[i] == '0' && tab->precision == 0)
		return ;
	while ((tab->precision - ft_strlen(str)) > 0)
	{
		write(1, "0", 1);
		tab->len++;
		tab->precision--;
	}
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
	int len;
	int preci;

	i = 0;
	len = (tab->precision > 0 && str[0] == '0' ? tab->precision :
	ft_strlen(str));
	preci = (tab->precision > ft_strlen(str) ? tab->precision -
	ft_strlen(str) : 0);
	preci = (tab->precision == 0 && str[0] == '0' ? preci - 1 : preci);
	while (tab->width > (len + preci))
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
	int len;
	int preci;

	i = tab->width;
	len = (tab->precision > 0 && str[0] == '0' ? tab->precision :
	ft_strlen(str));
	preci = (tab->precision > ft_strlen(str) ? tab->precision -
	ft_strlen(str) : 0);
	preci = (tab->precision == 0 && str[0] == '0' ? preci - 1 : preci);
	if (tab->flag[0] == '-' || tab->width < 0)
	{
		ft_putnbr(tab, str, 0);
		tab->width = (tab->width < 0 ? tab->width * -1 : tab->width);
		while (tab->width > (len))
		{
			write(1, " ", 1);
			len++;
			tab->len++;
		}
	}
	else if (tab->width > (len + preci))
		ft_truc(tab, str);
	else
		ft_putnbr(tab, str, 0);
}

static void		ft_precision(char *str, int s)
{
	int		i;

	i = 0;
	while (str[s])
	{
		str[i] = str[s];
		i++;
		s++;
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
	nb = (unsigned int)va_arg(tab->arg, unsigned long int);
	if (!(str = malloc(1024)))
		return (-1);
	ft_bzero(str, 1023);
	i = 1022;
	if (nb == 0)
		i--;
	while (nb != 0 || (nb / 16) > 0)
	{
		str[i] = (nb > 16 ? base[nb % 16] : base[nb]);
		nb /= 16;
		i--;
	}
	ft_precision(str, i + 1);
	ft_width(tab, str);
	free(str);
	return (0);
}
