/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:00:57 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/30 18:18:23 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned int index;
	unsigned char *sf1;
	unsigned char *sf2;

	sf1 = (unsigned char *)s1;
	sf2 = (unsigned char *)s2;
	index = 0;
	while (n && sf1[index] == sf2[index])
	{
		n--;
		index++;
	}

	return (sf1[index] - sf2[index]);
}
