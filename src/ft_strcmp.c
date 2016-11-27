/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:18:28 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 15:18:28 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	unsigned const char *s;
	unsigned const char *d;
	size_t	i;

	i = 0;
	s = (unsigned const char *)s1;
	d = (unsigned const char *)s2;
	while (s[i] && d[i] && s[i] == d[i])
	{
		if (!s[i] || !d[i])
			return ((int)((s[i] ? s[i] : d[i])));
		i++;
	}
	return ((int) (s[i] > d[i] ? s[i] - d[i] : d[i] - s[i]));
}
