/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 10:02:18 by lpoujade          #+#    #+#             */
/*   Updated: 2016/04/13 20:58:47 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_puthex(unsigned char num)
{
	if (num >= 16)
	{
		ft_puthex(num / 16);
		ft_puthex(num % 16);
	}
	if (num < 10)
		ft_putchar((char)(num + '0'));
	else if (num < 16)
		ft_putchar((char)(num + 87));
}

static const char			*print_line_ascii(const char *addr, int b)
{
	int c;

	c = 0;
	if (b != 16)
	{
		while (b % 16)
		{
			c++;
			b++;
			ft_putstr("  ");
			if (!(b % 2))
				ft_putchar(' ');
		}
		b = 16 - c;
	}
	while (b > 0 && addr)
	{
		ft_putchar(ft_isascii(*addr) ? *addr : '.');
		addr++;
		b--;
	}
	ft_putchar('\n');
	return (addr);
}

void				ft_pmem(const void *addr, size_t t)
{
	size_t			i;
	unsigned const char *p;
	const char			*c;

	i = 0;
	if (!addr)
		return ;
	p = (unsigned const char *)addr;
	c = (const char*)p;
	while (i < t)
	{
		if (!*p || *p < 0x10)
			ft_putchar('0');
		ft_puthex(*p);
		p++;
		i++;
		if (!(i % 2))
			ft_putchar(' ');
		if (!(i % 16) || i >= t)
			c = print_line_ascii(c, i < t ? 16 : (int)i);
	}
}
