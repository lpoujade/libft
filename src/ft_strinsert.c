/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 12:31:32 by lpoujade          #+#    #+#             */
/*   Updated: 2016/10/21 15:26:33 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strinsert(char *target, int pos, char *new)
{
	char	*ret;
	size_t	c;

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
