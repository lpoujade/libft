/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:40:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 19:07:20 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			p_sdec(va_list ap)
{
	t_mod		o;
	long long	t;

	t = 0;
	o = geto();
	if (!o.lmod[0])
		t = va_arg(ap, int);
	else if (o.lmod[0] == 'h' && !o.lmod[1])
		t = (short)va_arg(ap, int);
	else if (o.lmod[0] == 'h' && o.lmod[1] == 'h')
		t = (char)va_arg(ap, int);
	else if (o.lmod[0] == 'l' && !o.lmod[1])
		t = va_arg(ap, long int);
	else if (o.lmod[0] == 'l' && o.lmod[1] == 'l')
		t = va_arg(ap, long long int);
	ft_puts(t);
	return (0);
}

int			p_udec(va_list ap)
{
	t_mod					o;
	unsigned long long int	t;

	t = 0;
	o = geto();
	if (!o.lmod[0])
		t = va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'h' && !o.lmod[1])
		t = (unsigned short)va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'h' && o.lmod[1] == 'h')
		t = (unsigned char)va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'l' && !o.lmod[1])
		t = va_arg(ap, unsigned long int);
	else if (o.lmod[0] == 'l' && o.lmod[1] == 'l')
		t = va_arg(ap, unsigned long long int);
	ft_putu(t);
	return (0);
}

static void	putit(unsigned long long t, t_mod o)
{
	size_t len;

	len = gndigits(t);
	pad_pre(o, len);
	while ((int)len++ < o.precision)
		ft_putchar('0');
	ft_puthex(t, o.flags & F_HEXMAJ ? 0 : 1);
	pad_post(o, len);
}

int			p_uhex(va_list ap)
{
	t_mod					o;
	unsigned long long int	t;

	t = 0;
	o = geto();
	if (!o.lmod[0])
		t = va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'h' && !o.lmod[1])
		t = (unsigned short)va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'h' && o.lmod[1] == 'h')
		t = (unsigned char)va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'l' && !o.lmod[1])
		t = va_arg(ap, unsigned long int);
	else if (o.lmod[0] == 'l' && o.lmod[1] == 'l')
		t = va_arg(ap, unsigned long long int);
	putit(t, o);
	return (0);
}

void		ft_puthex(unsigned long long num, int casse)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, casse);
		ft_puthex(num % 16, casse);
	}
	if (num < 10)
		ft_putchar((char)(num + '0'));
	else if (num < 16)
		ft_putchar((char)(num + (casse ? 87 : '7')));
}
