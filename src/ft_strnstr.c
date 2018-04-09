/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 13:20:34 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 13:20:34 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*big && j < len)
	{
		while (little[i] == big[i] && j + i < len)
		{
			i++;
			if (!little[i] && !big[i])
				return (i + big);
		}
		i = 0;
		j++;
		big++;
	}
	return (NULL);
}
