/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:06:44 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 15:06:44 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned const char *s;
	unsigned const char *d;
	size_t				i;

	i = 0;
	s = (unsigned const char *)s1;
	d = (unsigned const char *)s2;
	while (i < n && s[i] && d[i] && s[i] == d[i])
	{
		if (!s[i] || !d[i])
			return ((int)((s[i] ? s[i] : d[i])));
		i++;
	}
	return ((int)(s[i] > d[i] ? s[i] - d[i] : d[i] - s[i]));
}
