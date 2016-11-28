/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 12:31:32 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/23 16:00:42 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strinsert(char *target, int pos, char *new)
{
	char	*ret;
	int	c;

	if (!target || !new || pos < 0)
		return (1);
	c = 0;
	if (!(ret = ft_strnew(ft_strlen(target + pos))))
		return (3);
	while (new[c] || target[c + pos])
	{
		ret[c] = target[c + pos];
		target[c + pos] = new[c];
		c++;
	}
	ft_strcat(target, ret);
	free(ret);
	return (0);
}

int		ft_strrmchar(char *str, int c)
{
	while (str[c] && str[c + 1])
	{
		str[c] = str[c + 1];
		c++;
	}
	str[c] = 0;
	return (0);
}
