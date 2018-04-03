/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:25:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/07 11:16:05 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			putxchar(char c, unsigned int n)
{
	while (n--)
		ft_putchar(c);
}

int				isupcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int				percent_symbol(va_list ap)
{
	int		r;
	t_mod	o;

	(void)ap;
	r = 0;
	o = geto();
	//r = pad_pre(o, 1);
	r += (int)ft_putchar('%');
	//r += pad_post(o, 1);
	return (r);
}
