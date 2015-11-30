/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:54:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/30 19:21:21 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	int i1;
	int i2;
	int pos;
	char *ret;

	i1 = 0;
	pos = -1;
	while (s1[i1] && n)
	{
		i2 = 0;
		if (s2[i2] && (s1[i1] == s2[i2]))
		{
			if (pos < 0)
				pos = i1;
			i2++;
		}
		i1++;
		n--;
	}
	if (pos > 0)
		ret = (char *)(s1 + pos);
	else
		ret = NULL;
	return (ret);
}
