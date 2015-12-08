/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:28:05 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/08 18:59:47 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		how_strings(char const *s, char c)
{
	char	*tmp;
	int		strs;

	tmp = (char *)s;
	strs = 0;
	while (*tmp)
		while (*(tmp++) != c)
			strs++;
	return (strs);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**ret;
	char		**ret_act;
	char		*tmp;
	char const	*s2;

	if (!(ret = (char **)ft_memalloc(how_strings(s, c))))
		return (ret);
	ret_act = ret;
	s2 = s;
	while (*s2)
	{
		if ((*s2 == c) && (*(s2 + 1) != c) && (*(s2 + 1) != '\0'))
		{
			if (!(tmp = ft_strnew(ft_strclchr((s2 + 1), c))))
				return (NULL);
			ret_act = &tmp;
			ft_strncpy(*ret_act, (s2 + 1), ft_strclchr((s2 + 1), c));
			ret_act++;
		}
		s2++;
	}
	return (ret);
}
