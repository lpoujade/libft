/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/modes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:41:39 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/14 18:27:49 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_mod			save_opt(t_mod newopt, int b)
{
	static t_mod opt;

	if (b)
		opt = newopt;
	return (opt);
}

t_mod					geto(void)
{
	t_mod n;

	n.flags = 0;
	return (save_opt(n, 0));
}

static	int				optsloop(int i, const char *c, t_mod *opt)
{
	while (c[i] && is_opt(c[i]))
	{
		if (ft_isdigit(c[i]) && !opt->flen && opt->precision == -1)
			opt->flen = (unsigned int)ft_atoi(c + i);
		else if (c[i] == '.')
			opt->precision = (ft_isdigit(c[i + 1]) ? ft_atoi(c + i + 1) : 0);
		else if (c[i] == 'l' || c[i] == 'h' || c[i] == 'z' || c[i] == 'j')
			i += get_lmod(opt, c + i);
		i++;
	}
	return (i);
}

unsigned int			parse_opt(const char *c)
{
	unsigned int	i;
	t_mod			opt;

	setemptyopt(&opt);
	i = getflags(&opt, c, 0);
	i = optsloop(i, c, &opt);
	if (c[i] != 'X' && isupcase(c[i]))
	{
		opt.lmod[0] = 'l';
		opt.lmod[1] = 0;
	}
	else if (c[i] == 'X')
		opt.flags |= F_HEXMAJ;
	if (c[i] == 'p')
	{
		opt.lmod[0] = 'l';
		opt.flags |= F_ALTMODE;
	}
	if (c[i] == 'o' || c[i] == 'O')
		opt.flags |= F_OCTAL;
	opt.name = c[i];
	save_opt(opt, 1);
	return (i);
}
