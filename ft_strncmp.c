/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:27:14 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/01 19:00:10 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned int i;
	int ret;
	int v1;
	int v2;

	v1 = 0;
	v2 = 0;
	i = 0;
	while (s1[i] && i < n)
	{
		v1 = v1 + s1[i];
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		v2 = v2 + s2[i];
		i++;
	}
	if (v2 > v1)
		ret = v2 - v1;
	else if (v1 > v2)
		ret = v1 - v2;
	else
		ret = 0;
	return (ret);
}
