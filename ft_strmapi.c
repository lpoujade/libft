/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:40:55 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 20:53:07 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int index;
	char *ret;

	ret = ft_strnew(strlen(s));
	index = 0;
	while (s[index])
	{
		ret[index] = (*f)(index, s[index]);
		index++;
	}
	ret[index] = '\0';

	return (ret);
}
