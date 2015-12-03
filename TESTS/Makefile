
NAME=test
LIB=../libft.a
CC=gcc
CFLAGS= -Wextra -Wall -Werror
INCLUDESDIR=.

SRC=main.c				\
	libc/t_strchr.c		\
	libc/t_strrchr.c	\
	libc/t_strstr.c		\
	libc/t_strnstr.c	\
	libc/t_strcmp.c		\
	libc/t_strncmp.c	\
	libc/t_strcpy.c		\
	libc/t_strncpy.c	\
	libc/t_strlen.c		\
	libc/t_strcat.c		\
	libc/t_strncat.c	\
	libc/t_strlcat.c	\
	libc/t_strdup.c		\
	libc/t_memchr.c		\
	libc/t_memcpy.c		\
	libc/t_memccpy.c	\
	libc/t_memcmp.c		\
	libc/t_memmove.c	\
	libc/t_atoi.c		\
	libc/t_isit.c		\
	ft/t_itoa.c
	#libc/t_is.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LIB) $(OBJ)

clean:
	-rm $(OBJ)

fclean: clean
	-rm $(NAME)

re: fclean all
