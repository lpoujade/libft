/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:45:10 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/24 10:04:04 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int		ft_strlen(const char *str);
char	ft_strcpy(char *dest, const char *src);
int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);

void	*ft_memalloc(size_t size);
void	 ft_memdel(void **ap);

/*
**
**
** TODO 
**
** classiques 
**
**strdup
**strncpy
**strcat
**strncat
**strlcat
**strchr
**strrchr
**strstr
**strnstr
**strncmp
**memset
**bzero
**memcpy
**memccpy
**memmove
**memchr
**memcmp
**atoi
**isalpha
**isdigit
**isalnum
**isascii
**isprint
**toupper
**tolower
**
**
** pas classique 
**
**
**
**
**char *  ft_strnew(size_t size);
**void	  ft_strdel(char **as);
**void	  ft_strclr(char *s);
**void	  ft_striter(char *s, void (*f)(char *));
**void	  ft_striteri(char *s, void (*f)(unsigned int, char *));
**char *  ft_strmap(char const *s, char (*f)(char));
**char *  ft_strmapi(char const *s, char (*f)(unsigned int, char));
**int	  ft_strequ(char const *s1, char const *s2);
**int	  ft_strnequ(char const *s1, char const *s2, size_t n);
**char *  ft_strsub(char const *s, unsigned int start, size_t len);
**char *  ft_strjoin(char const *s1, char const *s2);
**char *  ft_strtrim(char const *s);
**char **  ft_strsplit(char const *s, char c);
**char *  ft_itoa(int n);
**
*/

#endif
