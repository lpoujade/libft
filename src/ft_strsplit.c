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

static inline size_t	count_w(char const *s, char *c)
{
	int	i;
	size_t	co;

	i = 0;
	co = 0;
	while (s[i])
	{
		while (ft_strchr(c, s[i++]))
			if (!s[i])
				return (co);
		while (ft_strchr(c, s[i]) && s[i])
			i++;
		co++;
	}
	return (co);
}

char	**ft_strsplit(const char *s, char *c)
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
		if (ft_strchr(c, s[i]))
		{
			count++;
			while (s[1] && ft_strchr(c, s[i]))
				i++;
		}
		while (s[i + len] && ft_strchr(c, s[i + len]))
			len++;
		ret[n_w] = ft_strsub(s,  (unsigned int)i, len);
		n_w++;
	}
	ret[n_w] = NULL;
	return (ret);
}
