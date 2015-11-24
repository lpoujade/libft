/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:21:24 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/24 10:43:17 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strcpy(char *dest, const char *src)
{
	if (*dest && *src)
	{
		int src_len;
		int c;

		c = 0;
		src_len = ft_strlen(src);
		while (c <= src_len)
		{
			ft_putstr("entree, c=");ft_putnbr(c);
			dest[c] = src[c];
			c++;
		}

		return (*dest);
	}
	return (-1);
}
