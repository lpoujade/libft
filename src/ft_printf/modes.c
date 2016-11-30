/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/modes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:41:39 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/30 19:07:05 by lpoujade         ###   ########.fr       */
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

static int				is_opt(char c)
{
	return (c == '#' || c == ' ' || c == '-' || c == '+' || ft_isdigit(c) ||
			c == '.' || c == 'l' || c == 'h' || c == 'z' || c == 'j');
}

static void				setemptyopt(t_mod *o)
{
	o->flen = 0;
	o->flags = 0;
	o->precision = -1;
	o->plus_sign = 0;
	o->pad_char = ' ';
	o->lmod[0] = 0;
	o->lmod[1] = 0;
}

static unsigned int		getflags(t_mod *opt, const char *c)
{
	unsigned int i;

	i = 0;
	while (1)
	{
		if (c[i] == '#')
			opt->flags |= F_ALTMODE;
		else if (c[i] == '-')
		{
			opt->flags |= F_RIGHTALIGN;
			opt->pad_char = ' ';
		}
		else if (c[i] == '+')
			opt->plus_sign = '+';
		else if (c[i] == ' ' && !opt->plus_sign)
			opt->plus_sign = ' ';
		else if (c[i] == '0')
			opt->pad_char = '0';
		else
			break ;
		i++;
	}
	return (i);
}

static unsigned int		get_lmod(t_mod *o, const char *c)
{
	o->lmod[0] = *c;
	if (o->lmod[0] == *(c + 1))
	{
		o->lmod[1] += *(c + 1);
		return (1);
	}
	return (0);
}

unsigned int			parse_opt(const char *c)
{
	unsigned int	i;
	t_mod			opt;

	setemptyopt(&opt);
	i = getflags(&opt, c);
	while (is_opt(c[i]))
	{
		if (ft_isdigit(c[i]) && !opt.flen && opt.precision == -1)
			opt.flen = (unsigned int)ft_atoi(c + i);
		else if (c[i] == '.')
			opt.precision = (ft_isdigit(c[i + 1]) ? ft_atoi(c + i + 1) : 0);
		else if (c[i] == 'l' || c[i] == 'h' || c[i] == 'z' || c[i] == 'j')
			i += get_lmod(&opt, c + i);
		i++;
	}
	if (c[i] != 'X' && isupcase(c[i]))
		opt.lmod[0] = 'l';
	else if (c[i] == 'X')
		opt.flags |= F_HEXMAJ;
	save_opt(opt, 1);
	return (i);
}
