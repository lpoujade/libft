/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:08:59 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/03 18:34:07 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*new;
	unsigned long	c;

	c = 0;
	if (!(new = (char *)ft_memalloc(size + 1)))
		return (new);
	ft_memset(new, '\0', size + 1);
	return (new);
}
