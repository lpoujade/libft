/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:04:55 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/25 16:10:15 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;
	int c;

	c = 0;
	new = ft_memalloc(size + 1);
	while (c <= (ft_strlen(new)))
	{
		new[c] = '\0';
		c++;
	}
	return (new);
}
