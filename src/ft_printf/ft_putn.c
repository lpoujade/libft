/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:33:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 18:05:49 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		puts(signed long long n, int fd)
{
	if (n / 10)
	{
		puts(n / 10, fd);
		puts(n % 10, fd);
	}
	else if (n > 0)
		ft_putchar_fd('0' + (char)n, fd);
	else
		ft_putchar_fd('0' + -(char)n, fd);
}

void			ft_puts(signed long long t)
{
	unsigned int	len;
	t_mod			o;

	o = geto();
	len = gndigits(t) + (t < 0 || o.plus_sign ? 1 : 0);
	pad_pre(o, len);
	if (t < 0 || o.plus_sign)
	{
		ft_putchar_fd(t < 0 ? '-' : o.plus_sign, 1);
		len--;
	}
	while ((int)len++ < o.precision)
		ft_putchar('0');
	puts(t, 1);
	pad_post(o, len);
}

static void		putu(unsigned long long n, int fd)
{
	if (n / 10)
	{
		putu(n / 10, fd);
		putu(n % 10, fd);
	}
	else if (n > 0)
		ft_putchar_fd('0' + (char)n, fd);
	else
		ft_putchar_fd('0' + -(char)n, fd);
}

void			ft_putu(unsigned long long t)
{
	unsigned int	len;
	t_mod			o;

	o = geto();
	len = gndigits((signed long long)t);
	pad_pre(o, len);
	while ((int)len++ < o.precision)
		ft_putchar('0');
	putu(t, 1);
	pad_post(o, len);
}
