/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:36:20 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 13:41:24 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n) //--> copy almost n caract, else fill with \0
{
	char *origin;

	origin = dest;
	while (n || *src)
	{
		*dest = *src;
		dest++;
		src++;
		n++;
	}
	return (origin);
}

