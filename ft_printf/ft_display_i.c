/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:43:51 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/12/05 16:46:29 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_putnbr(t_struct *tab, char *str, int i)
{
	if (str[i] == '0' && tab->precision == 0)
		return ;
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

	if (tab->precision == 0 && str[0] == '0' && str[1] == 0)
	{
		if (tab->width < 0)
			tab->width--;
		else if (tab->width != 0)
			tab->width++;
	}
	i = (tab->width < 0 ? tab->width * -1 : tab->width);
	if (tab->flag[0] == '-' || tab->width < 0)
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

int				ft_display_i(t_struct *tab)
{
	int				nb;
	int				i;
	unsigned int	unb;
	char			*str;

	i = tab->precision;
	nb = (int)va_arg(tab->arg, unsigned long int);
	if (i < ft_nblen(nb))
		i = ft_nblen(nb);
	if (nb < 0 && i > ft_nblen(nb))
		i++;
	if (!(str = malloc(i + 1)))
		return (-1);
	ft_bzero(str, i);
	str[0] = (nb < 0 ? '-' : '0');
	unb = (nb < 0 ? -nb : nb);
	while (unb != 0)
	{
		str[i - 1] = unb % 10 + '0';
		unb /= 10;
		i--;
	}
	ft_width(tab, str);
	free(str);
	return (0);
}
