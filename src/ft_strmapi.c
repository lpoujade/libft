/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strmapi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:56:16 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 15:56:16 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	ret = malloc(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		ret[i] = (f)(i, s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
