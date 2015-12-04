/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:54:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/04 09:59:42 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *)s1;
	if (!*s2 || !s2)
		return ((char *)s1);
	while (*s && n)
	{
		i = 0;
		while (s[i] == s2[i] && n--)
		{
			i++;
			if (!s2[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
