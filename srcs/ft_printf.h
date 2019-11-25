/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 09:39:51 by jfeuilla          #+#    #+#             */
/*   Updated: 2019/11/25 12:46:47 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_struct
{
	const char	*format;
	va_list		arg;
	int			len;
	int			i;
	int			precision;
	int			width;
	char 		*conv;
	char		*conv_mask;
	char		*flag;
	char		*flag_mask;
}				t_struct;

#endif
