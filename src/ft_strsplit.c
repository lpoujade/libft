/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:14:46 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 16:14:46 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	count;
	size_t	len;
	size_t	n_w;
	size_t	i;
	char	**ret;
	
	len = 0;
	n_w = 0;
	i = 0;
	count = count_w(s, c);
	if (!(ret = malloc(sizeof(char *) * count)))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		while (s[i] != c)
			len++;
		ret[n_w] = ft_strsub(s,  (unsigned int)i, len);
		n_w++;
	}
	ret[n_w] = NULL;
	return (ret);
}
