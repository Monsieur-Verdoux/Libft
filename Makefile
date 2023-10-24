# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 15:40:30 by akovalev          #+#    #+#              #
#    Updated: 2023/07/18 19:49:27 by akovalev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_isalnum.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlen.c \

INCLUDES = libft.h

NAME = libft.a

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(OBJ): $(SRC)
	cc $(CFLAGS) -c $< -o $@ -I$(INCLUDES)

$(NAME): $(OBJ)
	ar -rs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
