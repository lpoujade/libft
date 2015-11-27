/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:20:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 23:24:31 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	int index;
	int len_s2;

	len_s2 = ft_strlen(s2);
	index = 0;
	while (s1[index] || *s2[index])
	{
		if (s1[index] == s2[index])
		{
			while (len_s2)
				index++;
		}
	}
	return (
