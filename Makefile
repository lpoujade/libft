# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:23:08 by lpoujade          #+#    #+#              #
#    Updated: 2015/11/23 21:28:33 by lpoujade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft
CC=gcc
CFLAGS=-Wall -Werror -Wextra -ansi
INCLUDESDIR=

SRC=ft_putchar.c	\
	ft_putstr.c		\
	ft_putnbr.c		\
	ft_strlen.c		\
	ft_strcpy.c		\
	ft_strcmp.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	-rm $(OBJ)

fclean: clean
	-rm $(NAME)

re: fclean all
