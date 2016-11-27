/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:05:01 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 16:05:01 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	len;
	char	*ret;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = malloc(len)))
		return (NULL);
	while (i <= len && s1[i])
	{
		ret[i] = s1[i];
	}
	while (i <= len && s2[i])
	{
		ret[i] = s2[i];
	}
	ret[i] = 0;
	return (ret);
}
