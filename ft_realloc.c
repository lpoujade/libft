/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 12:51:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/17 20:55:57 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_realloc(void **src, size_t src_size, size_t final_size)
{
	void	*ret;

	ret = NULL;
	if (*src && src_size < final_size)
	{
		ret = ft_memalloc(final_size);
		ft_memcpy(ret, *src, src_size);
		ft_memdel((void **)src);
	}
	return (ret);
}
