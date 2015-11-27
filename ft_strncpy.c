/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:36:20 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 20:57:04 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *origin;

	origin = dest;
	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (origin);
}
