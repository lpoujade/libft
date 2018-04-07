/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:03:02 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 13:12:11 by lpoujade         ###   ########.fr       */
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
	static	char	null_str[] = "(null)";
	unsigned int	len;
	int				r;
	wchar_t			*str;
	t_mod			o;

	r = 0;
	o = geto();
	str = (o.lmod[0] ? va_arg(ap, wchar_t *) : (wchar_t*)va_arg(ap, char *));
	len = (str ? (unsigned int)ft_strlen(str) : 6);
	if (o.precision > -1 && len > (unsigned int)o.precision)
		len = (unsigned int)o.precision;
	r += pad_pre(o, len);
	if (str)
		r += (o.lmod[0] ? ft_pwstr_fd(str, STDOUT_FILENO)
				: (int)write(STDOUT_FILENO, str, len));
	else
		r += (int)write(STDOUT_FILENO, null_str, 6);
	r += pad_post(o, len);
	return (o.flen ? (int)o.flen : r);
}
