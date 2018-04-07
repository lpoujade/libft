/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_memcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:51:00 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:51:00 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *t;
	unsigned const char *d;
	size_t				i;

	t = s1;
	d = s2;
	i = 0;
	while (i < n)
	{
		if (t[i] != d[i])
			return (t[i] - d[i]);
		i++;
	}
	return (0);
}
