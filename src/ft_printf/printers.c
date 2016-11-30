/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:03:02 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 14:42:51 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_schar(va_list ap)
{
	int		r;
	char	d;
	t_mod	o;

	o = geto();
	pad_pre(o, 1);
	d = (char)va_arg(ap, int);
	r = (int)ft_putchar(d);
	pad_post(o, 1);
	return (o.flen ? (int)o.flen : r);
}

int	p_uchar(va_list ap)
{
	int		r;
	char	d;
	t_mod	o;

	o = geto();
	pad_pre(o, 1);
	d = (char)va_arg(ap, unsigned int);
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
	r = (int)ft_putstr(str);
	pad_post(o, len);
	return (o.flen ? (int)o.flen : r);
}
