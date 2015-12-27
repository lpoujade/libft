/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/27 14:03:02 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/27 14:09:03 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*ret;
	size_t	i;

	ret = ft_strnew(ft_strlen(src));
	i = 0;
	while (i++ <= n && src[i])
		ret[i] = src[i];
	ret[i] = 0;
	return (ret);
}
