/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:43:31 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 15:09:14 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	f['o'] = &p_octal;
**	f['x'] = &p_hexadecimal;
**	f['X'] = &p_hexadecimal;
*/

static void	register_printers(int (*f[127])(va_list))
{
	f['d'] = &p_sdec;
	f['D'] = &p_sdec;
	f['i'] = &p_sdec;
	f['u'] = &p_udec;
	f['U'] = &p_udec;
	f['c'] = &p_schar;
	f['C'] = NULL;
	f['s'] = &p_str;
	f['S'] = NULL;
	f['p'] = NULL;
	f['O'] = NULL;
}

/*
static void	register_printers(int (*f[127])(va_list))
{
	f['d'] = &p_sint;
	f['D'] = &p_slong;
	f['i'] = &p_sint;
	f['u'] = &p_uint;
	f['U'] = &p_ulong;
	f['c'] = &p_schar;
	f['C'] = NULL;
	f['s'] = &p_str;
	f['S'] = NULL;
	f['p'] = NULL;
	f['O'] = NULL;
}
*/

int			a_format(const char **format, va_list ap)
{
	static int		(*formatt[127])(va_list ap) = {NULL};

	if (!formatt['d'])
		register_printers(formatt);
	(*format) += parse_opt(*format);
	if (!formatt[(unsigned char)**format])
		return (1);
	return ((formatt[(unsigned char)**format])(ap));
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	int		c;

	c = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *(++format) != '%')
			c += a_format(&format, ap);
		else
			c += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (c);
}
