/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:40:43 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 12:47:49 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int index;

	index = 0;
	while (n && s1[index] && s2[index] && s1[index] == s2[index])
	{
		n--;
		index++;
	}
	if (s1[index] == s2[index])
		n = 1;
	else
		n = 0;
	return (n);
}
