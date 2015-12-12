/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:11:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/12 11:51:34 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	void *tmp;

	tmp = ft_memalloc(len);
	if (!ft_memcpy(tmp, src, len))
		return (NULL);
	ft_memcpy(dest, tmp, len);
	ft_memdel(&tmp);
	return (dest);
}
