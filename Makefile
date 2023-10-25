# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 18:36:25 by icarboni          #+#    #+#              #
#    Updated: 2023/10/25 10:32:09 by icarboni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	push_swap
CC		= 	gcc
FLAGS	= 	-Werror -Wall -Wextra -I.
RM		= 	rm -f
SRC		= 	algorithm.c \
			check_errors.c \
			normalize.c \
			operations_p.c \
			operations_r.c \
			operations_rr.c \
			operations_s.c \
			push_swap.c \
			sorting.c \
			print_stacks.c \

OBJ		= 	${SRC:.c=.o}

LIBFT	= 	libft/libft.a

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_END=\033[0m

all	: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIBFT) 
	@echo "$(COLOUR_GREEN)Compiling push_swap$(COLOUR_END)"

$(OBJ): $(SRC)
	@$(CC) $(FLAG) -c $(SRC)

$(LIBFT):
	@make -C libft

clean	:
		@${RM} ${OBJ}
		@make clean -C libft
		@echo "$(COLOUR_RED)Deleting all .o Files$(COLOUR_END)"
		
fclean	:	clean
		@${RM} ${NAME}
		@make fclean -C libft
		@${RM} push_swap
		@echo "$(COLOUR_RED)Deleting .a Files$(COLOUR_END)"

re:	fclean all

.PHONY: all clean fclean re bonus