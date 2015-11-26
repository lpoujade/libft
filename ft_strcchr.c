/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:33:26 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 14:18:34 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcchr(char const *s, char c)
{
	int nc;
	int count;

	nc = 0;
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			nc++;
		count++;
	}
	return (nc);
}
