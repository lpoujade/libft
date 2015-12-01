/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:08:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/01 19:00:20 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;
	unsigned long c;

	c = 0;
	new = (char *)ft_memalloc(size + 1);
	while (c <= size)
	{
		new[c] = '\0';
		c++;
	}
	new[c] = '\0';
	return (new);
}
