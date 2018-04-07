#include "ft_printf.h"

int				is_opt(char c)
{
	return (c == '#' || c == ' ' || c == '-' || c == '+' || ft_isdigit(c) ||
			c == '.' || c == 'l' || c == 'h' || c == 'z' || c == 'j');
}

void			setemptyopt(t_mod *o)
{
	o->flen = 0;
	o->flags = 0;
	o->precision = -1;
	o->plus_sign = 0;
	o->pad_char = ' ';
	o->lmod[0] = 0;
	o->lmod[1] = 0;
}

unsigned int	getflags(t_mod *opt, const char *c, int i)
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
	else if (c[i] == ' ' && !(opt->plus_sign))
		opt->plus_sign = ' ';
	else if (c[i] == '0')
		opt->pad_char = '0';
	else if (!(c[i] == ' ' && opt->plus_sign) &&
			!(c[i] == '0' && opt->pad_char) && !(c[i] == '*'))
		return (i);
	++i;
	getflags(opt, c, i);
	return (i);
}

unsigned int	get_lmod(t_mod *o, const char *c)
{
	o->lmod[0] = *c;
	if (o->lmod[0] == *(c + 1))
	{
		o->lmod[1] = *(c + 1);
		return (1);
	}
	else
		o->lmod[1] = 0;
	return (0);
}
