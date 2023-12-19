# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 10:50:22 by mcenci            #+#    #+#              #
#    Updated: 2023/12/12 13:14:25 by mcenci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		= ./libft
LIBFT			= $(LIBFT_PATH)/libft.a
PRINTF_PATH		= ./ft_printf
PRINTF			= $(PRINTF_PATH)/libftprintf.a
HEADER			= ./minitalk.h

CFLAGS = -Wall -Werror -Wextra
CC = cc
CLIENT = client
SERVER = server

all: $(LIBFT) $(PRINTF) $(CLIENT) $(SERVER)

$(CLIENT): client.c $(LIBFT) $(PRINTF)
		$(CC) $(CFLAGS) client.c $(LIBFT) $(PRINTF) -o client

$(SERVER): server.c $(LIBFT) $(PRINTF)
		$(CC) $(CFLAGS) server.c $(LIBFT) $(PRINTF) -o server

$(LIBFT):
	make -C $(LIBFT_PATH)

$(PRINTF):
	make -C $(PRINTF_PATH)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(SERVER) $(CLIENT)
	make clean -C $(LIBFT_PATH)
	make clean -C $(PRINTF_PATH)

fclean: clean
	rm -rf $(CLIENT) $(SERVER)

re: fclean all
