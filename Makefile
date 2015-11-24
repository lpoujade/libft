# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+         #
:x
#    Created: 2015/11/23 16:23:08 by lpoujade          #+#    #+#              #
#    Updated: 2015/11/24 21:32:42 by lpoujade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Werror -Wextra
SRCDIR=.
INCLUDESDIR=.

# TESTING
TDIR=$(SRCDIR)
TESTER=$(TDIR)/tester.c
TOUTPUT=test.out

SRC=ft_itoa.c		\
	ft_putchar.c	\
	ft_putchar_fd.c	\
	ft_putstr.c		\
	ft_putstr_fd.c	\
	ft_putendl.c	\
	ft_putendl_fd.c	\
	ft_putnbr.c		\
	ft_putnbr_fd.c	\
	ft_strlen.c		\
	ft_strcpy.c		\
	ft_strnew.c		\
	ft_strdup.c		\
	ft_strdel.c		\
	ft_strclr.c		\
	ft_strcmp.c		\
	ft_strjoin.c	\
	ft_memalloc.c	\
	ft_memdel.c
SRC:=$(addprefix $(SRCDIR)/,$(SRC))

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

test: $(NAME)
	$(CC) $(CFLAGS) $(TESTER) $(NAME) -o $(TOUTPUT)

clean:
	-rm $(OBJ)

fclean: clean
	-rm $(NAME) $(TOUPUT)

re: fclean all
