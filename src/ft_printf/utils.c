/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:25:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/07 11:16:05 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			putxchar(char c, unsigned int n)
{
	while (n--)
		ft_putchar(c);
}

unsigned int	gndigits(long long int a)
{
	unsigned int c;

	c = 0;
	if (!a)
		return (1);
	while (a)
	{
		a /= 10;
		c++;
	}
	return (c);
}

unsigned int	gndigits_hex(long long int a)
{
	unsigned int c;

	c = 0;
	if (!a)
		return (1);
	while (a)
	{
		a /= 15;
		c++;
	}
	return (c);
}

unsigned int	gndigits_oct(long long int a)
{
	unsigned int c;

	c = 0;
	if (!a)
		return (1);
	while (a)
	{
		a /= 8;
		c++;
	}
	return (c);
}

int				pad_pre(t_mod o, size_t len)
{
	int writed;
	int n;

	writed = 0;
	n = (int)o.flen - (int)len;
	if (n > 0 && !(o.flags & F_RIGHTALIGN))
		while (n--)
			writed += ft_putchar(o.pad_char);
	return (writed);
}

int				pad_post(t_mod o, size_t len)
{
	int writed;
	int n;

	writed = 0;
	n = (int)o.flen - (int)len;
	if (n > 0 && o.flags & F_RIGHTALIGN)
		while (n--)
			writed += ft_putchar(o.pad_char);
	return (writed);
}

int				isupcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int				percent_symbol(va_list ap)
{
	int		r;
	t_mod	o;

	(void)ap;
	o = geto();
	r = pad_pre(o, 1);
	r += (int)ft_putchar('%');
	r += pad_post(o, 1);
	return (r);
}
