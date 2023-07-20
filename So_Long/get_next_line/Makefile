# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 19:49:59 by mcenci            #+#    #+#              #
#    Updated: 2023/07/20 19:50:01 by mcenci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
SRCS = ./get_next_line.c ./get_next_line_utils.c
OBJS = ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all