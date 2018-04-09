/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes/ft_printf.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:45:58 by lpoujade          #+#    #+#             */
/*   Updated: 2018/04/09 11:23:53 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <sys/types.h>
# include <inttypes.h>
# include <wchar.h>
# include <stdarg.h>
# include "libft.h"

# define F_ALTMODE		0x01
# define F_RIGHTALIGN	0x02
# define F_HEXMAJ		0x04
# define F_OCTAL		0x08

# define NULL_STR "(null)"
# define NULL_PTR "(null)"

typedef struct		s_mod
{
	int				precision;
	unsigned int	flen;
	short			flags;
	char			plus_sign;
	char			pad_char;
	char			lmod[2];
	char			name;
	char			pad;
}					t_mod;
int					p_sdec(va_list ap);
int					p_udec(va_list ap);
int					p_shex(va_list ap);
int					p_uhex(va_list ap);
int					p_uchar(va_list ap);
int					p_str(va_list ap);
int					ft_puts(signed long long t, t_mod o);
int					ft_putu(unsigned long long t, t_mod o);
int					ft_puto(unsigned long long t, t_mod o);
void				ft_puthex(unsigned long long num, int casse, int *w);
int					a_format(const char **format, va_list ap);
unsigned int		parse_opt(const char *c);
t_mod				geto(void);
unsigned int		get_lmod(t_mod *o, const char *c);
unsigned int		getflags(t_mod *opt, const char *c, int i);
void				setemptyopt(t_mod *o);
int					is_opt(char c);
void				putxchar(char c, unsigned int n);
unsigned int		gndigits(long long int a);
unsigned int		gndigits_hex(long long int a);
unsigned int		gndigits_oct(long long int a);
int					isupcase(char c);
int					percent_symbol(va_list ap);
int					pad_pre(t_mod o, size_t len);
int					pad_post(t_mod o, size_t len);
#endif
