/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 13:16:45 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 13:16:45 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (*haystack)
	{
		while (needle[i] == haystack[i])
		{
			i++;
			if (!needle[i] && !haystack[i])
				return (haystack + i);
		}
		i = 0;
		haystack++;
	}
	return (NULL);
}
