/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:54:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/08 16:04:14 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	i1;

	if (!*s2 || !s2)
		return ((char *)s1);
	i1 = 0;
	while (s1[i1] && i < n)
	{
		i = 0;
		while (s1[i1 + i] == s2[i] && (i + i1) < n)
		{
			if (!s2[i])
				return ((char *)&s1[i1]);
			i++;
		}
		i1++;
	}
	return (NULL);
}
