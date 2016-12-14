# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/11 13:41:06 by lpoujade          #+#    #+#              #
#    Updated: 2016/12/14 19:39:02 by lpoujade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
src_path=./src
obj_path=./.obj

CC=clang
CFLAGS=#-Wall -Werror -Wextra -g #-Weverything -Wno-documentation-unknown-command
CPPFLAGS=-Iincludes/
ARFLAGS=scr

# libft ft_printf logf env line_edition ft_select
obj=ft_realloc.o ft_printf/printers.o ft_printf/printers_num.o ft_printf/ft_printf.o ft_printf/utils.o ft_printf/modes.o ft_printf/ft_putn.o ft_strcchr.o ft_atoi_base.o ft_strncat.o ft_put.o ft_strmapi.o ft_strinsert.o ft_strtrim.o ft_strdel.o ft_putchar.o ft_strncmp.o ft_strlen.o ft_strnew.o ft_strlcat.o ft_striter.o ft_swap.o ft_strrmstr.o ft_to.o ft_strsub.o ft_memalloc.o ft_strtnew.o ft_lstadd_funcs.o ft_strnstr.o ft_striteri.o logf.o ft_strclchr.o ft_atoi.o ft_strcat.o ft_strrchr.o ft_memcmp.o ft_memset.o ft_strcmp.o ft_srtrmstr.o ft_strchr.o ft_isit.o ft_putnbr.o ft_bzero.o ft_memchr.o ft_strdup.o ft_strinv.o ft_strclr.o ft_strjoin.o ft_strtdel.o ft_memdel.o ft_strnequ.o ft_strcpy.o ft_strequ.o ft_strsplit.o ft_getndigits.o get_next_line.o ft_tabmax.o ft_memccpy.o ft_lstmanage_funcs.o ft_memmove.o ft_strmap.o ft_itoa.o ft_mat.o ft_pmem.o ft_memcpy.o ft_strncpy.o ft_strstr.o 

all: $(obj_path) $(NAME)

test_t: tests/test.c $(NAME)
	@clang -Wformat -Werror $(CPPFLAGS) $< $(NAME) -o tests/$@
	@echo -e "compiling\033[32m" $@ "\033[0m"

src_dirs=$(shell find src/ -type d | sed -e 's/src\///')

$(obj_path):
	@echo $(src_dirs)
	mkdir -p $(obj_path) $(addprefix $(obj_path)/,$(src_dirs))

$(NAME): $(addprefix $(obj_path)/,$(obj))
	@$(AR) $(ARFLAGS) $@ $^
	@echo -e "linking to\033[32m" $@ "\033[0m"

$(obj_path)/%.o: $(src_path)/%.c
	@mkdir -p .obj && mkdir -p .obj/ft_printf
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	@echo -e "compiling\033[36m" $@ "\033[0m"

clean:
	-rm $(addprefix $(obj_path)/,$(obj))

fclean: clean
	-rm $(NAME)

depgen:
	# remove olds deps in Makefile & add marker at bottom
	sed -i.bcp -e '/^#STARTDEPS$$/,$$d' Makefile && echo "#STARTDEPS" >> Makefile \
		|| echo "FAIL DETELING OLD RULES"
	# append new ones
	clang -MM $(addprefix $(src_path)/,$(obj:.o=.c)) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(LDLIBS) \
		| sed -e '/^ /! s/^/.obj\//' >> Makefile || echo "FAIL"

re: fclean all

.PHONY: all, clean, fclean, re

# ---- dependances ----
#
#STARTDEPS
