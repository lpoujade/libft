/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_memccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:40:14 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:40:14 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned const char *t_s;
	unsigned char		*t_d;
	size_t				i;

	i = 0;
	t_s = src;
	t_d = dest;
	while (i < n)
	{
		if (t_s[i] == c)
			break ;
		t_d[i] = t_s[i];
		i++;
	}
	return (dest);
}
