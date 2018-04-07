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

int		ft_strinsert(char *target, int tsize, int pos, char *new)
{
	char	*tmp;
	int		c;

	c = 0;
	tmp = NULL;
	if (pos < 0 || pos > (int)ft_strlen(target) || !target || !new)
		return (1);
	if (!(tmp = ft_strdup(target + pos)))
		return (3);
	while (new[c] && c < tsize)
	{
		target[c + pos] = new[c];
		++c;
	}
	pos += c;
	c = 0;
	while (tmp[c] && (c + pos) < tsize)
	{
		target[pos + c] = tmp[c];
		++c;
	}
	free(tmp);
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
