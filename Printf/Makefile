# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 12:30:46 by mcenci            #+#    #+#              #
#    Updated: 2023/04/21 12:36:12 by mcenci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SCR = ./ft_putchar.c ./ft_printf.c ./ft_hexadecimal.c ./ft_putnbr.c ./ft_putstr.c ./ft_unsint.c ./ft_voidhex.c
FLAGS = -Wall -Wextra -Werror
OBJ = $(SCR:%.c=%.o)

all: $(NAME)
$(NAME):
		gcc -c $(FLAGS) $(SCR)
		ar rcs $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all