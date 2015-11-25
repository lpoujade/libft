/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:45:10 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/25 15:06:53 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);

int		ft_strlen(const char *str);
int		ft_strcmp(char *s1, char *s2);
char 	*ft_strnew(size_t size);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strdel(char **as);
void	ft_strclr(char *s);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap); // PROBLEM ?
char	*ft_strdup(const char *s1);

char	*ft_itoa(int n);	// DO NOT USE

char *ft_strcat(char *s1, const char *s2); // if s1 >= s1+s2, s1.append(s2).append(\0)
/*
**
**
** TODO 
**
** classiques 
**
** char *ft_strncpy(char *dest, const char *src, size_t n); --> copy almost n caract, else fill with \0
** char *ft_strncat(char *s1, const char *s2); --> if s1 >= s1+s2, s1.append(s2).append(\0) | n caract MAX
** size_t ft_strlcat(char *dest, char const *src, size_t size);  --> dest.append(src) + \0 "at most size - len(dest) - 1 bytes" 
** char *ft_strchr(char const *s, int c); --> locate first occurence of c ( converted to char ) in s. '\0' possible
** char *ft_strrchr(char const *s, int c); --> like strchr, but last occurence instead of first.
** char *ft_strstr(char const *s1, char const *s2); --> locate 1st occurence of s2 in s1
** char *ft_strnstr(char const *s1, char const *s2, size_t n); --> strstr but not more n caract are searched ( n caract from s2 ? )
** int ft_strncmp(char const *s1, char const *s2, size_t n); --> compare not more than n caract
** void *ft_memset(void *b, int c, size_t len); --> write len*c in *b ( return *b)
** void ft_bzero(void *s, size_t n); --> write n*\0 in s
** void *ft_memcpy(void *dest, void const *src, size_t n); --> cp n bytes from src to dest
** void *ft_memccpy(void *dest, void const *src, int c, size_t n); --> cp n bytes from src to dest else if c (converted to unsigned char) in src, so point
** void *ft_move(void *dest, void const *src, size_t len); --> cp len bytes from src to dest
** void *ft_memchr(void const *s, int c, size_t n); --> locates c (unsigned char) in sm return pointer to it
** void *ft_memcmp(void const *s1, void const *s2, size_t n); --> compare s1, s2 : len(both)=n
** int ft_atoi(char const *str); --> convert str.... to int representation (???)
** int ft_isalpha(int c); --> alpha: maj or min
** int ft_isdigit(int c); --> depend on locale. else : 0->9
** int ft_isalnum(int c); --> isalpha() or isdigit()
** int ft_isascii(int c); --> is ascii
**isprint
**toupper
**tolower
**
**
** pas classique 
**
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
**
*/

#endif
