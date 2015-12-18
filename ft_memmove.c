/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:11:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/18 14:27:18 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*t_src;
	unsigned char	*t_dst;

	t_src = (unsigned char *)src;
	t_dst = (unsigned char *)dst;
	if (t_src > (t_dst + len))
		ft_memcpy(t_src, t_dst, len);
	else
		while (len--)
			t_src[len] = t_dst[len];
	return (dst);
}
