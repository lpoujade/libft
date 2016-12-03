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
	return (ft_puts(t));
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
	return (ft_putu(t));
}

static int	putit(unsigned long long t, t_mod o)
{
	int		w;
	size_t	len;

	//ft_pmem(&o, sizeof(o.flags));
	w = 0;
	len = gndigits_hex((long)t);
	w += pad_pre(o, len);
	if (o.flags & F_ALTMODE)
		w += ft_putstr("0x");
	while ((int)len < o.precision)
	{
		w += ft_putchar('0');
		len++;
	}
	ft_puthex(t, (o.flags & F_HEXMAJ ? 0 : 1), &w);
	w += pad_post(o, len);
	return (w);
}

int			p_uhex(va_list ap)
{
	int						writed;
	t_mod					o;
	unsigned long long int	t;

	writed = 0;
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
	writed += putit(t, o);
	return (writed);
}

void		ft_puthex(unsigned long long num, int casse, int *w)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, casse, w);
		ft_puthex(num % 16, casse, w);
	}
	if (num < 10)
		*w += ft_putchar((char)(num + '0'));
	else if (num < 16)
		*w += ft_putchar((char)(num + (casse ? 87 : '7')));
}
