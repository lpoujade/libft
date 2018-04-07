/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:38:33 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:38:33 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char *s;
	unsigned char		*d;
	size_t				c;

	c = 0;
	s = src;
	d = dest;
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	return (dest);
}
