/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:33:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/01 12:23:01 by lpoujade         ###   ########.fr       */
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

int				ft_puts(signed long long t)
{
	int				writed;
	unsigned int	len;
	t_mod			o;

	o = geto();
	len = gndigits(t) + ((t < 0 || o.plus_sign) ? 1 : 0);
	writed = pad_pre(o, len);
	if (t < 0 || o.plus_sign)
	{
		writed += ft_putchar_fd(t < 0 ? '-' : o.plus_sign, 1);
		len--;
	}
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	nputs(t, 1, &writed);
	writed += pad_post(o, len);
	return (writed);
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

int				ft_putu(unsigned long long t)
{
	int				writed;
	unsigned int	len;
	t_mod			o;

	writed = 0;
	o = geto();
	len = gndigits((signed long long)t);
	writed += pad_pre(o, len);
	while ((int)len < o.precision)
	{
		writed += ft_putchar('0');
		len++;
	}
	putu(t, 1, &writed);
	writed += pad_post(o, len);
	return (writed);
}
