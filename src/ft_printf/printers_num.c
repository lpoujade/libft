/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:40:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 16:23:07 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int p_sdec(va_list ap)
{
	t_mod	o;
	long long t;

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

int p_udec(va_list ap)
{
	t_mod	o;
	unsigned long long int t;

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

/*
int	p_sint(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	ft_puts(i);
	return (0);
}

int	p_uint(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	ft_putu(i);
	return (0);
}

int	p_slong(va_list ap)
{
	long int i;

	i = va_arg(ap, long int);
	ft_puts(i);
	return (0);
}

int	p_ulong(va_list ap)
{
	unsigned long	lu;

	lu = va_arg(ap, unsigned long);
	ft_putu(lu);
	return (0);
}
*/
