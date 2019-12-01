# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/01 16:42:43 by jfeuilla          #+#    #+#              #
#    Updated: 2019/12/01 16:47:06 by jfeuilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft.a
DIR_LIBFT	= ./libft/
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_bzero.c \
				ft_display_c.c \
				ft_display_i.c \
				ft_display_p.c \
				ft_display_pc.c \
				ft_display_s.c \
				ft_display_u.c \
				ft_display_x.c \
				ft_initialize.c \
				ft_nblen.c \
				ft_parse_flag.c \
				ft_parse_number.c \
				ft_parse_precision.c \
				ft_parse_width.c \
				ft_parser.c \
				ft_printf.c \
				ft_putstr.c \
				ft_reinitialize.c \
				ft_strlen.c \
				ft_switch.c \
				ft_treat.c \

OBJ			= $(FILES:.c=.o)

CFLAGS		= -Wall -Wextra -Werror

.c.o:	
			cc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): 		$(OBJ) ft_printf.h
				make -C $(DIR_LIBFT)
				cp $(DIR_LIBFT)$(LIBFT) ./$(NAME)
				ar rcs $(NAME) $(OBJ)
				/bin/rm -f $(LIBFT)
				ranlib $(NAME)

all:		$(NAME)

clean:		
			rm -f $(OBJ)
			make clean -C $(DIR_LIBFT)

fclean:		clean
			rm -f $(NAME)
			make fclean -C $(DIR_LIBFT)

re:			fclean all

.PHONY:		clean fclean all re
