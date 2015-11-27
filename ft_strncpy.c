/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:36:20 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 12:49:28 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *origin;

//	ft_putstr("IN STRNCPY, longueur de la chaine a copier : ");
//	ft_putnbr(n);ft_putchar('\n');
//	ft_putstr("IN STRNCPY, chaine a copier : ");
//	ft_putendl(src);

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
