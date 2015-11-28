/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:05:19 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 22:20:49 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int ret;
	int i;
	int v1;
	int v2;

	v1 = 0;
	v2 = 0;
	i = 0;
	while (s1[i])
	{
		v1 = v1 + s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
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
