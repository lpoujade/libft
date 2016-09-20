/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 13:55:56 by lpoujade          #+#    #+#             */
/*   Updated: 2016/09/20 14:29:54 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrmstr(char *str, char *torm)
{
	char	*ret;
	char	*subs;
	int		c;
	int		sec;

	c = 0;
	sec = 0;
	if (!(subs = ft_strstr(str, torm)))
		return (str);
	if (!(ret = ft_strnew(ft_strlen(str) - ft_strlen(torm))))
		return (NULL);
	while (str[c])
	{
		if ((str + c) == subs)
			sec += ft_strlen(torm);
		ret[c] = str[c + sec];
		c++;
	}
	return (ret);
}
