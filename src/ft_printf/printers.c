/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:03:02 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/07 11:34:58 by lpoujade         ###   ########.fr       */
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

	r = 0;
	o = geto();
	str = va_arg(ap, char *);
	len = (unsigned int)ft_strlen(str);
	if (o.precision > -1 && len > (unsigned int)o.precision)
		len -= (unsigned int)o.precision;
	r += pad_pre(o, len);
	if (len)
		r += (int)write(STDOUT_FILENO, str, len);
	else if (str == 0)
		r += ft_putstr(NULL_STR);
	r += pad_post(o, len);
	return (o.flen ? (int)o.flen : r);
}
