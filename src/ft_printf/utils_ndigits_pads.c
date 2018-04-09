/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_printf/utils_ndigits_pads.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 09:46:55 by lpoujade          #+#    #+#             */
/*   Updated: 2018/04/09 09:46:55 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
