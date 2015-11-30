/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:43:33 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/30 20:57:28 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char *str;

	str = (char *)s;
	str = (str + ft_strlen(str));
	while (*str != c)
	{
		if (*str == s[0] && *str != c)
			return (NULL);
		str--;
	}
	return (str);
}
