/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strsub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:02:49 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 16:02:49 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!(ret = malloc(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s[i + start];
		i++;
	}
	return (ret);
}
