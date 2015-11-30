/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:43:33 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/30 19:26:40 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int index;
	char *ret;

	index = ft_strlen(s);
	while (index && s[index] != c)
		index--;
	if (index == 0)
		ret = NULL;
	else
		ret = (char *)(s + index + 1);
	return (ret);
}
