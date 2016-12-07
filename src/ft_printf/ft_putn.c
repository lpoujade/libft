/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:33:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/05 16:15:04 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_putoctal(unsigned long long num, int *w)
{
	if (num >= 8)
	{
		ft_putoctal(num / 8, w);
		ft_putoctal(num % 8, w);
	}
	else
		*w += ft_putchar((char)(num + '0'));
}

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
	unsigned int	len;
	int	writed;
	t_mod			o;

	writed = 0;
	len = 0;
	o = geto();
	o.pad_char = ' ';
	if (t)
		len = gndigits(t);
	writed += pad_pre(o, len
			- ((o.precision != -1 && (unsigned int)o.precision < len) ? (unsigned int)o.precision : 0)
				- ((t < 0 || o.plus_sign) ? 1 : 0));
	if (t < 0 || o.plus_sign)
		writed += ft_putchar(t < 0 ? '-' : o.plus_sign);
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	if (t != 0 || (!t && o.precision))
		nputs(t, 1, &writed);
	writed += pad_post(o, len);
	return (writed);
}

int				ft_putu(unsigned long long t)
{
	int				writed;
	unsigned int	len;
	t_mod			o;

	writed = 0;
	o = geto();
	len = 0;
	if (t)
		len = gndigits((signed long long)t);
	writed += pad_pre(o, len - (o.precision != -1 ? (unsigned int)o.precision : 0));
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	if (t != 0 || (!t && o.precision))
		putu(t, 1, &writed);
	writed += pad_post(o, len);
	return (writed);
}

int ft_puto(unsigned long long t)
{
	int				writed;
	unsigned int	len;
	t_mod			o;

	writed = 0;
	o = geto();
	len = 0;
	if (t)
		len = gndigits_oct((signed long long)t) + (o.flags & F_ALTMODE ? 1 : 0);
	writed += pad_pre(o, len + (o.precision != -1 ? (unsigned int)o.precision : 0));
	if (o.flags & F_ALTMODE)
		writed += ft_putchar('0');
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	if (t != 0 || (!t && o.precision))
		ft_putoctal(t, &writed);
	o.pad_char = ' ';
	writed += pad_post(o, len);
	return (writed);
}
