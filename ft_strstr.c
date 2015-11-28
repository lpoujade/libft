/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:20:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 15:52:02 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	int index1;
	int index2;
	int pos;
	char *ret;

	index1 = 0;
	index2 = 0;
	pos = -1;
	while (s1[index1])
	{
		if (s2[index2] && (s1[index1] == s2[index2]))
		{
			if (pos < 0)
				pos = index1;
			index2++;
		}
		index1++;
	}
	if (pos > 0)
		ret = (char *)(s1 + pos);
	else
		ret = NULL;
	return (ret);
}
