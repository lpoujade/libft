/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:16:31 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 14:20:17 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int index;

	while (s1[index] && s2[index] && s1[index] == s2[index])
		index++;
	if (s1[index] == s2[index])
		index = 1;
	else
		index = 0;

	return (index);
}
