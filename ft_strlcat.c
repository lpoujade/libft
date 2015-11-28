/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 19:39:25 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 19:52:51 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char const *src, size_t len)
{
	size_t index;

	index = 0;
	while (index <= len )
	{
		dest[index + len] = src[index];
		index++;
	}
	dest[index + len] = '\0';

	return (ft_strlen(dest));
}
