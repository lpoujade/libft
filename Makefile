# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/11 13:41:06 by lpoujade          #+#    #+#              #
#    Updated: 2016/12/01 12:50:19 by lpoujade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
SRCDIR=./src
OBJDIR=./.obj

CC=clang
CFLAGS=-Wall -Werror -Wextra -g -Weverything -Wno-documentation-unknown-command
CPPFLAGS=-Iincludes/
ARFLAGS=scr

SRC_PRINTF=ft_printf.c printers.c printers_num.c modes.c ft_putn.c utils.c #ft_sprintf.c formatters.c
SRC=ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strncmp.c ft_strcmp.c ft_atoi.c ft_isit.c ft_to.c ft_striter.c ft_striteri.c ft_strclr.c ft_memalloc.c ft_strnew.c ft_memdel.c ft_strdel.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_putchar.c ft_put.c ft_itoa.c ft_tabmax.c ft_strcchr.c ft_strclchr.c ft_strinv.c ft_realloc.c ft_lstmanage_funcs.c ft_lstadd_funcs.c ft_swap.c ft_getndigits.c get_next_line.c ft_pmem.c ft_mat.c ft_strtdel.c ft_strtnew.c ft_strrmstr.c ft_strinsert.c ft_putnbr.c $(addprefix ft_printf/,$(SRC_PRINTF))

OBJ=$(SRC:.c=.o)

SRCS=$(addprefix $(SRCDIR)/,$(SRC))
OBJS=$(addprefix $(OBJDIR)/,$(OBJ))

all: $(NAME)

test_t: test.c $(NAME) $(NAME)
	$(CC) $(CPPFLAGS) $(CFLAGS) $< $(NAME) -o $@
	@echo -e "compiling\033[32m" $@ "\033[0m"

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo -e "linking to\033[32m" $@ "\033[0m"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p .obj && mkdir -p .obj/ft_printf
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	@echo -e "compiling\033[36m" $@ "\033[0m"

clean:
	-rm $(OBJS)

fclean: clean
	-rm $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
