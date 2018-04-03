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

CC=gcc
CFLAGS=-Wall -Werror -Wextra -g -Wno-discarded-qualifiers -Wno-unused -Wno-incompatible-pointer-types
CPPFLAGS=-Iincludes/
ARFLAGS=scr

# libft ft_printf logf env line_edition ft_select
obj=ft_realloc.o ft_printf/printers.o ft_printf/printers_num.o ft_printf/ft_printf.o ft_printf/utils.o ft_printf/modes.o ft_printf/utils_modes.o ft_printf/ft_putn.o ft_printf/utils_ndigits_pads.o ft_strcchr.o ft_atoi_base.o ft_strncat.o ft_put.o ft_strmapi.o ft_strinsert.o ft_strtrim.o ft_strdel.o ft_putchar.o ft_strncmp.o ft_strlen.o ft_strnew.o ft_strlcat.o ft_striter.o ft_swap.o ft_strrmstr.o ft_to.o ft_strsub.o ft_memalloc.o ft_strtnew.o ft_lstadd_funcs.o ft_strnstr.o ft_striteri.o logf.o ft_strclchr.o ft_atoi.o ft_strcat.o ft_strrchr.o ft_memcmp.o ft_memset.o ft_strcmp.o ft_srtrmstr.o ft_strchr.o ft_isit.o ft_putnbr.o ft_bzero.o ft_memchr.o ft_strdup.o ft_strinv.o ft_strclr.o ft_strjoin.o ft_strtdel.o ft_memdel.o ft_strnequ.o ft_strcpy.o ft_strequ.o ft_strsplit.o ft_getndigits.o get_next_line.o ft_tabmax.o ft_memccpy.o ft_lstmanage_funcs.o ft_memmove.o ft_strmap.o ft_itoa.o ft_mat.o ft_pmem.o ft_memcpy.o ft_strncpy.o ft_strstr.o \
	stack_indent.o

all: $(obj_path) $(NAME)
	-rm libft.a
	cp $(NAME) libft.a

test_t: tests/test.c $(NAME)
	@gcc -Wformat -Werror $(CPPFLAGS) $< $(NAME) -o tests/$@
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
	gcc -MM $(addprefix $(src_path)/,$(obj:.o=.c)) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(LDLIBS) \
		| sed -e '/^ /! s/^/.obj\//' >> Makefile || echo "FAIL"

re: fclean all

.PHONY: all, clean, fclean, re

# ---- dependances ----
#
#STARTDEPS
.obj/ft_realloc.o: src/ft_realloc.c includes/libft.h
.obj/printers.o: src/ft_printf/printers.c includes/ft_printf.h \
 includes/libft.h
.obj/printers_num.o: src/ft_printf/printers_num.c includes/ft_printf.h \
 includes/libft.h
.obj/ft_printf.o: src/ft_printf/ft_printf.c includes/ft_printf.h \
 includes/libft.h
.obj/utils.o: src/ft_printf/utils.c includes/ft_printf.h includes/libft.h
.obj/modes.o: src/ft_printf/modes.c includes/ft_printf.h includes/libft.h
.obj/utils_modes.o: src/ft_printf/utils_modes.c includes/ft_printf.h \
 includes/libft.h
.obj/ft_putn.o: src/ft_printf/ft_putn.c includes/ft_printf.h includes/libft.h
.obj/utils_ndigits_pads.o: src/ft_printf/utils_ndigits_pads.c \
 includes/ft_printf.h includes/libft.h
.obj/ft_strcchr.o: src/ft_strcchr.c includes/libft.h
.obj/ft_atoi_base.o: src/ft_atoi_base.c
.obj/ft_strncat.o: src/ft_strncat.c includes/libft.h
.obj/ft_put.o: src/ft_put.c includes/libft.h
.obj/ft_strmapi.o: src/ft_strmapi.c includes/libft.h
.obj/ft_strinsert.o: src/ft_strinsert.c includes/libft.h
.obj/ft_strtrim.o: src/ft_strtrim.c includes/libft.h
.obj/ft_strdel.o: src/ft_strdel.c includes/libft.h
.obj/ft_putchar.o: src/ft_putchar.c includes/libft.h
.obj/ft_strncmp.o: src/ft_strncmp.c includes/libft.h
.obj/ft_strlen.o: src/ft_strlen.c includes/libft.h
.obj/ft_strnew.o: src/ft_strnew.c includes/libft.h
.obj/ft_strlcat.o: src/ft_strlcat.c includes/libft.h
.obj/ft_striter.o: src/ft_striter.c includes/libft.h
.obj/ft_swap.o: src/ft_swap.c includes/libft.h
.obj/ft_strrmstr.o: src/ft_strrmstr.c includes/libft.h
.obj/ft_to.o: src/ft_to.c includes/libft.h
.obj/ft_strsub.o: src/ft_strsub.c includes/libft.h
.obj/ft_memalloc.o: src/ft_memalloc.c includes/libft.h
.obj/ft_strtnew.o: src/ft_strtnew.c includes/libft.h
.obj/ft_lstadd_funcs.o: src/ft_lstadd_funcs.c includes/libft.h
.obj/ft_strnstr.o: src/ft_strnstr.c includes/libft.h
.obj/ft_striteri.o: src/ft_striteri.c includes/libft.h
.obj/logf.o: src/logf.c includes/logf.h includes/libft.h
.obj/ft_strclchr.o: src/ft_strclchr.c includes/libft.h
.obj/ft_atoi.o: src/ft_atoi.c includes/libft.h
.obj/ft_strcat.o: src/ft_strcat.c includes/libft.h
.obj/ft_strrchr.o: src/ft_strrchr.c includes/libft.h
.obj/ft_memcmp.o: src/ft_memcmp.c includes/libft.h
.obj/ft_memset.o: src/ft_memset.c includes/libft.h
.obj/ft_strcmp.o: src/ft_strcmp.c includes/libft.h
.obj/ft_srtrmstr.o: src/ft_srtrmstr.c includes/libft.h
.obj/ft_strchr.o: src/ft_strchr.c includes/libft.h
.obj/ft_isit.o: src/ft_isit.c includes/libft.h
.obj/ft_putnbr.o: src/ft_putnbr.c includes/libft.h
.obj/ft_bzero.o: src/ft_bzero.c includes/libft.h
.obj/ft_memchr.o: src/ft_memchr.c includes/libft.h
.obj/ft_strdup.o: src/ft_strdup.c includes/libft.h
.obj/ft_strinv.o: src/ft_strinv.c includes/libft.h
.obj/ft_strclr.o: src/ft_strclr.c includes/libft.h
.obj/ft_strjoin.o: src/ft_strjoin.c includes/libft.h
.obj/ft_strtdel.o: src/ft_strtdel.c includes/libft.h
.obj/ft_memdel.o: src/ft_memdel.c includes/libft.h
.obj/ft_strnequ.o: src/ft_strnequ.c includes/libft.h
.obj/ft_strcpy.o: src/ft_strcpy.c includes/libft.h
.obj/ft_strequ.o: src/ft_strequ.c includes/libft.h
.obj/ft_strsplit.o: src/ft_strsplit.c includes/libft.h
.obj/ft_getndigits.o: src/ft_getndigits.c includes/libft.h
.obj/get_next_line.o: src/get_next_line.c includes/libft.h
.obj/ft_tabmax.o: src/ft_tabmax.c includes/libft.h
.obj/ft_memccpy.o: src/ft_memccpy.c includes/libft.h
.obj/ft_lstmanage_funcs.o: src/ft_lstmanage_funcs.c includes/libft.h
.obj/ft_memmove.o: src/ft_memmove.c includes/libft.h
.obj/ft_strmap.o: src/ft_strmap.c includes/libft.h
.obj/ft_itoa.o: src/ft_itoa.c includes/libft.h
.obj/ft_mat.o: src/ft_mat.c includes/libft.h
.obj/ft_pmem.o: src/ft_pmem.c includes/libft.h
.obj/ft_memcpy.o: src/ft_memcpy.c includes/libft.h
.obj/ft_strncpy.o: src/ft_strncpy.c includes/libft.h
.obj/ft_strstr.o: src/ft_strstr.c includes/libft.h
.obj/stack_indent.o: src/stack_indent.c includes/libft.h
