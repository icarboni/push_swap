# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 19:53:24 by icarboni          #+#    #+#              #
#    Updated: 2022/11/29 19:30:59 by icarboni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAG = -Wall -Wextra -Werror -I.
SRC = push_swap.c utils.c stack_utils.c
OBJ = ${SRC:.c=.o}
LIBFT = ./libft/libft.a
MAKE_LIBFT = -f ./libft/Makefile

all: make_libft $(NAME)

make_libft:
	cd libft && $(MAKE) 
	
$(NAME): $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) $(LIBFT)

 $(OBJ): $(SRC)
	$(CC) $(FLAG) -c $(SRC)

clean:
	/bin/rm -f $(OBJ)
	cd libft && $(MAKE) fclean

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all 

.PHONY: clean fclean all re