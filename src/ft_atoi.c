/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:19:34 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 15:19:34 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == ' ' || c == '\v' || c == '\f' \
			|| c == '\r');
}

int		ft_atoi(const char *s)
{
	int	ret;
	int neg;

	ret = 0;
	neg = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		neg = (*s == '-' ? -1 : +1);
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		ret *= 10;
		ret += (*s - '0');
		s++;
	}
	return (ret * neg);
}
