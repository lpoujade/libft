/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:14:23 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 21:41:40 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long count;
	unsigned char *b2;

	b2 = b;
	count = 0;
	while (count <= len)
	{
		b2[count] = c;
		count++;
	}
	return (b);
}
