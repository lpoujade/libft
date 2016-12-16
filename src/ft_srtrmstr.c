/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 13:55:56 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 13:27:15 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrmstr(char *str, char *torm)
{
	char	*ret;
	char	*subs;
	int		c;

	c = 0;
	subs = (char*)ft_strstr(str, torm);
	if (!(ret = ft_strnew(ft_strlen(str) - ft_strlen(torm))))
		return (NULL);
	while (str[c])
	{
		if ((str + c) != subs)
			ret[c] = str[c];
		else
			c += ft_strlen(torm);
	}
	free(str);
	return (ret);
}
