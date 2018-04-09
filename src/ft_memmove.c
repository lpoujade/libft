/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:41:56 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:41:56 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	unsigned char		*tmp;
	size_t				i;

	i = 0;
	s = src;
	d = dest;
	if (!(tmp = malloc(sizeof(unsigned char) * n)))
		return (NULL);
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}
