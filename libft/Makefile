# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icarboni <icarboni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 10:45:23 by icarboni          #+#    #+#              #
#    Updated: 2023/10/24 13:59:38 by icarboni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a
FLAG 		= 	-Wall -Wextra -Werror -I. -c

LIBFT	 	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \

BONUS		= 	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c \

PRINTF		=	ft_printf.c \
				ft_printf_utils.c \
				ft_putnbr.c \
				ft_hexadecimal.c \
				ft_uputnbr.c \
				ft_decimal.c \

OBJ_LIBFT	=	${LIBFT:.c=.o}
OBJ_BONUS 	= 	${BONUS:.c=.o}
OBJ_PRINTF 	= 	${PRINTF:.c=.o}

all: $(NAME)

$(NAME): $(OBJ_LIBFT) $(OBJ_BONUS) $(OBJ_PRINTF)
	@gcc $(FLAG) $(LIBFT) $(BONUS) $(PRINTF) 
	@ar rc $(NAME) $(OBJ_LIBFT) $(OBJ_BONUS) $(OBJ_PRINTF)

clean:
	@rm -f $(OBJ_LIBFT)
	@rm -f $(OBJ_BONUS)
	@rm -f $(OBJ_PRINTF)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
