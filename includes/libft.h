/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:45:54 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 15:12:21 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <execinfo.h>

# define BUFF_SIZE 256

typedef struct		s_list
{
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef	struct		s_file
{
	char			*buff;
	struct s_file	*nxt;
	int				fd;
	int				buff_size;
}					t_file;

int	ft_printf(const char *format, ...)__attribute__((format (printf, 1, 2)));
void				ft_pmem(const void *addr, size_t t);
int					get_next_line(int const fd, char **line);
void				ft_swap(void *a, void *b);
void				ft_iswap(int *a, int *b);
int					ft_getndigits(int a);
//void				ft_puthex(unsigned char num);
int					ft_strtdel(char ***str);
char				**ft_strtnew(size_t size);
char		**ft_strtdup(char **strt);
const char	*ft_strchr(const char *s, int c);
int					ft_strcchr(char const *s, char c);
int					ft_strclchr(char const *s, char c);
int		ft_strrmchar(char *str, int c);
char				*ft_strrmstr(char *str, char *torm);
char    *ft_strndup(char const *str, size_t len);
char				*ft_strinv(char *s);
int					ft_strinsert(char *target, int tsize, int pos, char *new);
void				*ft_realloc(void **src, size_t src_size, size_t final_size);
int					ft_pow(int n, int p);
signed int	ft_abs(signed int n);
int					ft_tabmax(int *t, int siz);
void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstinsert(t_list **fflist, t_list *new, \
		int (*f)(t_list*, t_list*));
void				ft_lstappend(t_list *alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *));
void				ft_lstdel(t_list **alst, void (*del)(void *));
int					ft_lstinsert_list(t_list *fflist, t_list *ffnew, \
		int (*f)(t_list*, t_list*));
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
const char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
const char	*ft_strnstr(const char *big, const char *little, size_t len);
const char	*ft_strrchr(const char *s, int c);
const char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_atoi(const char *s);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_strclr(char *s);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_ftstrtrim(const char *s);
char	*ft_strtrim(const char *s, const char *set);
char	**ft_strsplit(const char *s, char *c);
ssize_t	ft_putendl_fd(const char *s, int fd);
ssize_t	ft_putendl(const char *s);
ssize_t	ft_putstr_fd(const char *s, int fd);
ssize_t	ft_putstr(const char *s);
ssize_t ft_pwstr_fd(const wchar_t *s, int fd);
ssize_t	ft_putchar(wchar_t c);
ssize_t	ft_putchar_fd(wchar_t c, int fd);
char		*ft_itoa(signed int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_putoctal(unsigned long long num, int *w);
#endif
