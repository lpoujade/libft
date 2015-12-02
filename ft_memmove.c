/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:11:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/02 11:16:47 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	void *tmp;

	tmp = ft_memalloc(len);
	if (!ft_memcpy(tmp, src, len))
	{
		ft_putendl_fd("In ft_memmove, malloc failed", 2);
		return (NULL);
	}
	ft_memcpy(dest, tmp, len);
	return (dest);
}
