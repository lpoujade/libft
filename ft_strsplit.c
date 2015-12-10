/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 12:20:44 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/10 14:33:59 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		how_strings(char const *s, char c)
{
	int	i;
	int	co;

	i = 0;
	co = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (!s[i])
				return (co);
		}
		while (s[i] != c && s[i])
			i++;
		co++;
	}
	return (co);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		len;
	char	**ret;
	int		i_ptr;
	int		strs;

	strs = how_strings(s, c);
	if (!s || !(ret = (char **)ft_memalloc(strs)))
		return (NULL);
	i = 0;
	i_ptr = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i + len] != c && s[i + len])
			len++;
		if (len)
		{
			ret[i_ptr] = ft_strsub(s, i, len);
			i = i + len;
			i_ptr++;
		}
	}
	ret[i_ptr] = NULL;
	return (ret);
}
