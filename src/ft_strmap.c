/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:54:02 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 15:54:02 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*ret;

	ret = malloc(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		ret[i] = (f)(s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
