/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 20:30:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/09/13 20:31:41 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strtnew(size_t size)
{
	char	**k;

	if (!(k = malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (size)
		k[size--] = NULL;
	k[0] = NULL;
	return (k);
}

char		**ft_strtdup(char **strt)
{
	int		len;
	char	**ret;

	ret = NULL;
	len = 0;
	while(strt[len])
		len++;
	ret = ft_strtnew(len);
	while(len--)
	{
		ret[len] = ft_strdup(strt[len]);
	}
	return (ret);
}
