/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:33:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 15:12:28 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		nputs(signed long long n, int fd, int *w)
{
	if (n / 10)
	{
		nputs(n / 10, fd, w);
		nputs(n % 10, fd, w);
	}
	else if (n > 0)
		*w += ft_putchar_fd('0' + (char)n, fd);
	else
		*w += ft_putchar_fd('0' + -(char)n, fd);
}

static void		putu(unsigned long long n, int fd, int *w)
{
	if (n / 10)
	{
		putu(n / 10, fd, w);
		putu(n % 10, fd, w);
	}
	else if (n > 0)
		*w += ft_putchar_fd('0' + (char)n, fd);
	else
		*w += ft_putchar_fd('0' + -(char)n, fd);
}

int				ft_puts(signed long long t)
{
	int				f_len;
	unsigned int	len;
	int				w;
	t_mod			o;

	f_len = 0;
	w = 0;
	len = 0;
	o = geto();
	if (t)
	{
		len = gndigits(t);
		f_len = (o.precision != -1 && (unsigned int)o.precision > len) ?
			o.precision : (int)len;
	}
	if (o.pad_char == ' ' && o.precision > 0)
	{
		o.pad_char = ' ';
		w += pad_pre(o, (unsigned int)f_len + ((t < 0 || o.plus_sign) ? 1 : 0));
	}
	if (t < 0 || o.plus_sign)
		w += ft_putchar(t < 0 ? '-' : o.plus_sign);
	if (o.pad_char == '0')
		w += pad_pre(o, (unsigned int)f_len + ((t < 0 || o.plus_sign) ? 1 : 0));
	while ((int)len < o.precision)
	{
		w += ft_putchar('0');
		len++;
	}
	if (o.precision || t)
		nputs(t, 1, &w);
	o.pad_char = ' ';
	return ((w += pad_post(o, len + ((t < 0 || o.plus_sign) ? 1 : 0))));
}

int				ft_putu(unsigned long long t)
{
	int				writed;
	unsigned int	len;
	int				field_len;
	t_mod			o;

	writed = 0;
	field_len = 0;
	o = geto();
	len = 0;
	if (t)
	{
		len = gndigits((signed long long)t);
		field_len = (o.precision != -1 && (unsigned int)o.precision > len) ?
			o.precision : (int)len;
	}
	writed += pad_pre(o, (size_t)field_len);
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	if (t || o.precision)
		putu(t, 1, &writed);
	o.pad_char = ' ';
	return ((writed += pad_post(o, len)));
}

int				ft_puto(unsigned long long t)
{
	int				field_len;
	int				writed;
	unsigned int	len;
	t_mod			o;

	field_len = 0;
	writed = 0;
	o = geto();
	len = 0;
	if (t)
	{
		len = gndigits_oct((signed long long)t);
		field_len = (o.precision != -1 && (unsigned int)o.precision > len) ?
			o.precision : (int)len;
	}
	writed += pad_pre(o, (size_t)field_len + (o.flags & F_ALTMODE ? 1 : 0));
	if (o.flags & F_ALTMODE)
		writed += ft_putchar('0');
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	if (t || o.precision)
		ft_putoctal(t, &writed);
	o.pad_char = ' ';
	return ((writed += pad_post(o, len + (o.flags & F_ALTMODE ? 1 : 0))));
}
