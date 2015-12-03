/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 19:39:25 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/03 16:55:50 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char const *src, size_t len)
{
	size_t l_dest;
	size_t count;

	if (len < ft_strlen(dest) + ft_strlen(src))
			return ((ft_strlen(dest) + ft_strlen(src)) - (len - 1));

	l_dest = ft_strlen(dest);
	count = 0;
	while (count < len)
	{
		if (!src[count])
			return (ft_strlen(src) + l_dest);
		dest[l_dest + count] = src[count];
		count++;
	}
	return (ft_strlen(src) + l_dest);
}
