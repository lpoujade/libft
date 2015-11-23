/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:39:21 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/23 18:53:38 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char    ft_strcpy(char *dest, const char *src)
{
    if (*dest && *src)
    {
        int src_len;
        int c;

        c = 0;
        src_len = ft_strlen(src);
        while (c <= src_len)
        {
            ft_putstr("entree, c=");ft_putnbr(c);ft_putchar('\n');
            dest[c] = src[c];
            c++;
        }

        return (*dest);
    }
    return (-1);
}
*/
char	ft_strcpy(char *dest, const char *src)
{
	if(*dest && *src)
	{
		*dest = *src;
		ft_strcpy(dest++, src++);
	}
	*dest = '\0';
	return (*dest);
}

