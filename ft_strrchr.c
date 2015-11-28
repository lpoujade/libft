/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:43:33 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 14:47:24 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int index;
	char *ret;

	index = ft_strlen(s);
	while (index + 1 && s[index] != c)
		index--;
	if (index == 0)
		ret = NULL;
	else
		ret = (char *)(s + index);
	return (ret);
}
