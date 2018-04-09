/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:36:19 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:36:19 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = src;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (src);
}
