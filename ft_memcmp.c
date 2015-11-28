/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:00:57 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 14:13:09 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned int index;
	int ret;
	char *sf1;
	char *sf2;

	sf1 = (char *)s1;
	sf2 = (char *)s2;
	index = 0;
	while (index <= n && sf1[index] == sf2[index])
		index++;
	if (index == n)
		ret = 0;
	else if (sf1[index] > sf2[index])
		ret = sf1[index] - sf2[index];
	else
		ret = sf2[index] - sf1[index];
	return (ret);
}
