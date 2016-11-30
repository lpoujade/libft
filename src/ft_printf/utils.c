/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:25:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 19:04:30 by lpoujade         ###   ########.fr       */
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

void			pad_pre(t_mod o, size_t len)
{
	int n;

	n = (int)o.flen - len;
	if (n > 0 && !(o.flags & F_RIGHTALIGN))
		while (n--)
			ft_putchar(o.pad_char);
}

void			pad_post(t_mod o, size_t len)
{
	long int n;

	n = o.flen - (long)len;
	if (n > 0 && o.flags & F_RIGHTALIGN)
		while (n--)
			ft_putchar(o.pad_char);
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
	pad_pre(o, 1);
	r = (int)ft_putchar('%');
	pad_post(o, 1);
	return (r);
}
