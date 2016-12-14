/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_sprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:38:48 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/29 12:50:42 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	register_formatters(int (*f[127])(va_list, char**, size_t*, const char*))
{
	f['d'] = &fint;
	f['s'] = &fstr;
	f['c'] = &fchar;
	f['l'] = &flong;
}

/*
int		ft_sprintf(char **str, const char *format, ...)
{
	va_list	ap;
	size_t	len;
	int		c;
	int		(*formatt[127])(va_list ap, char **dest, size_t *len);

	c = 0;
	len = 80;
	if (!(*str = ft_strnew(len)))
		return (-3);
	va_start(ap, format);
	register_formatters(formatt);
	while (*format)
	{
		if (c >= (int)(len - 1))
		{
			ft_realloc((void**)str, len, len * 2);
			len *= 2;
		}
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				(*str)[c] = *format;
				c++;
			}
			else
				c += (formatt[(unsigned char)*format])(ap, str, &len);
		}
		else
		{
			(*str)[c] = *format;
			c++;
		}
		format++;
	}
	(*str)[c + 1] = '\0';
	va_end(ap);
	return (c);
}
*/


int		ft_printf_b(const char *format, ...)
{
	va_list	ap;
	size_t	len;
	char	*tmp;
	size_t		c;
	int		(*formatt[127])(va_list ap, char **dest, size_t *len, char const *format);

	c = 0;
	len = 80;
	if (!(tmp = ft_strnew(len)))
		return (-3);
	register_formatters(formatt);
	va_start(ap, format);
	while (*format)
	{
		if (c >= (int)(len - 1))
		{
			ft_realloc((void**)&tmp, len, len * 2);
			len *= 2;
		}
		if (*format == '%')
		{
			format++;
			if (*format != '%')
				c += (formatt[(unsigned char)*format])(ap, &tmp, &len, format);
			else
			{
				tmp[c] = *format;
				c++;
			}
		}
		else
		{
			tmp[c] = *format;
			c++;
		}
		format++;
	}
	tmp[c + 1] = '\0';
	va_end(ap);
	if (write(STDOUT_FILENO, tmp, c) != c)
		return (-1);
	return (c);
}
