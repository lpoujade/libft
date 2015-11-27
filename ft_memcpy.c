/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:36:49 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 23:11:07 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char *tmp_d;
	char *tmp_s;

	tmp_d = (char *)dst;
	tmp_s = (char *)src;
	while (n)
	{
		tmp_d = tmp_s;
		tmp_d++;
		tmp_s++;
		n--;
		ft_putendl(tmp_d);
	}
	return (dst);
}
