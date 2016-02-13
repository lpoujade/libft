# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/11 13:41:06 by lpoujade          #+#    #+#              #
#    Updated: 2016/02/13 14:51:57 by lpoujade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCDIR=.
OBJDIR=./.obj

CC=clang
CFLAGS=-Wall -Werror -Wextra -g
CPPFLAGS=-Iincludes/
ARFLAGS=scr

SRC=ft_itoa.c ft_atoi.c ft_pow.c ft_tabmax.c ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strnew.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strsub.c ft_strdup.c ft_strdel.c ft_strclr.c ft_strcmp.c ft_strncmp.c ft_strequ.c ft_strnequ.c ft_strcchr.c ft_strrchr.c ft_strclchr.c ft_strchr.c ft_strstr.c ft_strnstr.c ft_strjoin.c ft_strsplit.c ft_strtrim.c ft_strmap.c ft_strmapi.c ft_striter.c ft_striteri.c ft_strinv.c ft_isupper.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_bzero.c ft_memset.c ft_memalloc.c ft_realloc.c ft_memdel.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_lstnew.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstdelone.c ft_lstmap.c
OBJ=$(SRC:.c=.o)

SRCS=$(addprefix $(SRCDIR)/,$(SRC))
OBJS=$(addprefix $(OBJDIR)/,$(OBJ))

all: $(NAME) $(LIB)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "linking to\033[32m" $@ "\033[0m("`stat -f "%z" $@` "bytes)"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	@echo "compiling\033[36m" $@ "\033[0m("`stat -f "%z" $@` "bytes)"

clean:
	-rm $(OBJS)

fclean: clean
	-rm $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
