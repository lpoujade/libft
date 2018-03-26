/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes/ft_printf.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:45:58 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/14 18:24:31 by lpoujade         ###   ########.fr       */
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

# define	F_ALTMODE		0x01
# define	F_RIGHTALIGN	0x02
# define	F_HEXMAJ		0x04
# define	F_OCTAL			0x08

# define NULL_STR "(null)"
# define NULL_PTR "(null)"

typedef struct	s_mod
{
	int				precision;
	unsigned int	flen;
	short			flags;
	char			plus_sign;
	char			pad_char;
	char			lmod[2];
	char			name;
	char			_pad;
}				t_mod;

/*
int	ft_printf_b(const char *format, ...)__attribute__((format (printf, 1, 2)));
int	ft_sprintf(char **str, const char *format, ...)__attribute__((format (printf, 2, 3)));
int	fchar(va_list ap, char **dest, size_t *len, const char *format);
int	fint(va_list ap, char **dest, size_t *len, const char *format);
int	fstr(va_list ap, char **dest, size_t *len, const char *format);
int flong(va_list ap, char **dest, size_t *len, const char *format);
*/

/* conversion functions (get via va_arg in valable type) */
int p_sdec(va_list ap);
int p_udec(va_list ap);
int p_shex(va_list ap);
int p_uhex(va_list ap);

/* printers : get/print a type */
int	p_uchar(va_list ap);
/*
int	p_sint(va_list ap);
int	p_uint(va_list ap);
int p_slong(va_list ap);
int p_ulong(va_list ap);
*/
int	p_str(va_list ap);

int		ft_puts(signed long long t);
int		ft_putu(unsigned long long t);

int ft_puto(unsigned long long t);
void		ft_puthex(unsigned long long num, int casse, int *w);

/* ~parsing format/options/… */
int				a_format(const char **format, va_list ap);
unsigned int	parse_opt(const char *c);
t_mod			geto(void);

/* utils */
void			putxchar(char c, unsigned int n);
unsigned int	gndigits(long long int a);
unsigned int	gndigits_hex(long long int a);
unsigned int	gndigits_oct(long long int a);
int				isupcase(char c);
int				percent_symbol(va_list ap);

/* ~ output formatting */
int	pad_pre(t_mod o, size_t len);
int	pad_post(t_mod o, size_t len);

#endif
