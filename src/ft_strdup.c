/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:54:21 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:54:21 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	i;

	i = ft_strlen(s);
	if (!(ret = malloc(i)))
		return (NULL);
	while (i + 1)
	{
		ret[i] = s[i];
		i--;
	}
	return (ret);
}
