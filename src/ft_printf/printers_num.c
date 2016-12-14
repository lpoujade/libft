/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:40:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/14 19:10:08 by lpoujade         ###   ########.fr       */
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
	else if (o.lmod[0] == 'j')
		t = va_arg(ap, intmax_t);
	else if (o.lmod[0] == 'z')
		t = va_arg(ap, ssize_t);
	return (ft_puts(t));
}

int			p_udec(va_list ap)
{
	t_mod					o;
	unsigned long long int	t;
	int						w;

	w = 0;
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
	else if (o.lmod[0] == 'j')
		t = va_arg(ap, uintmax_t);
	else if (o.lmod[0] == 'z')
		t = va_arg(ap, size_t);
	w += (o.flags & F_OCTAL ? ft_puto(t) : ft_putu(t));
	return (w);
}

static int	putit(unsigned long long t, t_mod o)
{
	int		w;
	size_t	len;
	int		field_len;

	field_len = 0;
	w = 0;
	len = 0;
	if (t)
	{
		len = gndigits_hex((signed long long)t);
		if (o.precision != -1 && (unsigned int)o.precision > len)
			field_len = o.precision;
		else
			field_len = (int)len;
	}
	if (!(o.pad_char == '0'))
		w += pad_pre(o, (size_t)field_len);
	if (o.flags & F_ALTMODE && (t || o.name == 'p'))
		w += ft_putstr(o.flags & F_HEXMAJ ? "0X" : "0x");
	if (o.pad_char == '0')
		w += pad_pre(o, (size_t)field_len);
	while ((int)len < o.precision)
	{
		w += ft_putchar('0');
		len++;
	}
	if (o.precision == -1 || (t != 0 && o.precision))
		ft_puthex(t, (o.flags & F_HEXMAJ ? 0 : 1), &w);
	o.pad_char = ' ';
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
	else if (o.lmod[0] == 'j')
		t = va_arg(ap, uintmax_t);
	else if (o.lmod[0] == 'z')
		t = va_arg(ap, size_t);
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
