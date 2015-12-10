/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:28:05 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/10 10:39:20 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		how_strings(char const *s, char c)
{
	int		co;
	int		i;

	i = 0;
	co = 0;
	while (s[i++])
		if (s[i] == c && s[i + 1] != c && s[i + 1] && s[i - 1] != c)
			co++;
	return (co + 1);
}

static int		how_long(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**ret;
	int			i;
	int			i_ptr;

	if (s && *s)
	{
		if (!(ret = (char **)ft_memalloc(how_strings(s, c) + 1)))
			return (NULL);
		i = 0;
		i_ptr = 0;
		while (s[i])
		{
			if ((i == 0 || s[i - 1] == c) && s[i] != c && s[i + 1])
			{
				if (!(ret[i_ptr] = ft_strnew(how_long((s + i), c))))
					return (NULL);
				ft_strncpy(ret[i_ptr], (s + i), how_long((s + i), c));
				i_ptr++;
			}
			i++;
		}
		*ret[how_strings(s, c) + 1] = 0;
	}
	else
		ret = NULL;
	return (ret);
}
