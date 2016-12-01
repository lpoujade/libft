/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:03:02 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/01 13:17:05 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_uchar(va_list ap)
{
	int		r;
	wchar_t	d;
	t_mod	o;

	d = 0;
	o = geto();
	pad_pre(o, 1);
	if (!o.lmod[0])
		d = (char)va_arg(ap, unsigned int);
	else if (o.lmod[0] == 'l' && !o.lmod[1])
	{
		d = (wchar_t)va_arg(ap, wint_t);
	}
	r = (int)ft_putchar(d);
	pad_post(o, 1);
	return (o.flen ? (int)o.flen : r);
}

int	p_str(va_list ap)
{
	unsigned int	len;
	int				r;
	char			*str;
	t_mod			o;

	o = geto();
	str = va_arg(ap, char *);
	len = (unsigned int)ft_strlen(str);
	pad_pre(o, len);
	r = write(STDOUT_FILENO, str, o.precision >= 0 ? o.precision : len);
	pad_post(o, len);
	return (o.flen ? (int)o.flen : r);
}
