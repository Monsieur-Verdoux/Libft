# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalev <akovalev@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 15:40:30 by akovalev          #+#    #+#              #
#    Updated: 2023/11/02 14:05:08 by akovalev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_isalnum.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_calloc.c \
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

INCLUDES = libft.h

NAME = libft.a

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \

BONUS_OBJ = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

.o: .c
	cc $(CFLAGS) -c $< -o $@ -I$(INCLUDES)

$(NAME): $(OBJ)
	ar -rs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(BONUS_OBJ)
	ar -rs $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY: clean fclean all re bonus
