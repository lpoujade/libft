/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 12:20:44 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/11 14:52:34 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_print_memory(const void *addr, size_t size);

static int		how_strings(char const *s, char c)
{
	int	i;
	int	co;

	i = 0;
	co = 0;
	while (s[i])
	{
		while (s[i++] == c)
			if (!s[i])
				return (co);
		while (s[i] != c && s[i])
			i++;
		co++;
	}
	return (co);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		len;
	int		i_ptr;
	int		strs;

	strs = how_strings(s, c);
	if (!s || !(ret = (char **)malloc(strs + 1)))
		return (NULL);
	ft_bzero(ret, strs + 1);
	i = 0;
	i_ptr = 0;
	while (strs)
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i + len] != c && s[i + len])
			len++;
		if (len)
		{
			if (!(ret[i_ptr] = ft_strnew(len)))
			{
				free(ret);
				return (NULL);
			}
			ft_strncpy(ret[i_ptr], (s + i), len);
			i_ptr++;
			i = i + len;
		}
		strs--;
	}
	//ft_print_memory(ret[0], ft_strlen(ret[0]));
	ret[i_ptr] = NULL;
	return (ret);
}
