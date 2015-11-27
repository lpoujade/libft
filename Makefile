# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 22:03:15 by lpoujade          #+#    #+#              #
#    Updated: 2015/11/27 20:30:27 by lpoujade         ###   ########.fr        #
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
	ft_strncpy.c	\
	ft_strnew.c		\
	ft_strcat.c		\
	ft_strncat.c	\
	ft_strsub.c		\
	ft_strdup.c		\
	ft_strdel.c		\
	ft_strclr.c		\
	ft_strcmp.c		\
	ft_strequ.c		\
	ft_strnequ.c	\
	ft_strcchr.c	\
	ft_strclchr.c	\
	ft_strchr.c		\
	ft_strjoin.c	\
	ft_strsplit.c	\
	ft_strtrim.c	\
	ft_strmap.c		\
	ft_strmapi.c	\
	ft_isupper.c	\
	ft_toupper.c	\
	ft_isalpha.c	\
	ft_memset.c		\
	ft_bzero.c		\
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
	-rm $(NAME) $(TOUTPUT)

re: fclean all
