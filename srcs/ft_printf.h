/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 09:39:51 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/29 18:59:52 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> /*a retirer*/

typedef	struct	s_struct
{
	const char	*format;
	va_list		arg;
	int			len;
	int			i;
	int			precision;
	int			width;
	char		conv[9];
	char		*conv_mask;
	char		flag[4];
	char		*flag_mask;
}				t_struct;

int				ft_printf(const char *format, ...);
void			ft_initialize(t_struct *tab);
int				ft_parser(t_struct *tab);
void			ft_reinitialize(t_struct *tab);
int				ft_treat(t_struct *tab);
void			ft_parse_flag(t_struct *tab);
void			ft_parse_precision(t_struct *tab);
int				ft_parse_number(t_struct *tab);
void			ft_parse_width(t_struct *tab);
int				ft_switch(t_struct *tab);

void			ft_putstr(t_struct *tab, char *str);
int				ft_strlen(char *str);
int				ft_nblen(long long int nb);

int				ft_display_c(t_struct *tab);
int				ft_display_s(t_struct *tab);
int				ft_display_p(t_struct *tab);
int				ft_display_i(t_struct *tab);
int				ft_display_u(t_struct *tab);

void				ft_display(t_struct *tab);/*a retirer*/

#endif
