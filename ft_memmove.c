/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:11:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 23:19:23 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	char *tmp;
	unsigned int index;
	char *src_save;

	index = 0;
	src_save = (char *)src;
	tmp = (char *)ft_memalloc(len);
	while(index <= len)
	{
		tmp[index] = src_save[index];
		index++;
	}
	index = 0;
	ft_memcpy(dest, tmp, len);
	return (dest);
}
