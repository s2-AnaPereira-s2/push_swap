# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 10:11:10 by ana-pdos          #+#    #+#              #
#    Updated: 2025/07/31 10:11:14 by ana-pdos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -I. -I$(LIBFT_DIR) 
LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

CFILES = push_swap.c
OFILES = $(CFILES:.c=.o)

.PHONY: all clean fclean re 

all: $(NAME)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OFILES) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(INCLUDES) $(OFILES) $(LIBFT_LIB) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OFILES)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all