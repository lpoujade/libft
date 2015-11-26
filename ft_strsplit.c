/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:28:05 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 14:27:53 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **ret;
	char **ret_act;
	char const *s2;

	ret = (char **)ft_memalloc(ft_strlen(s));
	ret_act = ret;
	s2 = s;
	while (s2)
	{
		if ((*s2 == c) && (*(s2 + 1) != c))
		{
			//*ret_act = ft_strsub(s2, (s2 + 1), ft_strclchr((s2 + 1), c));
			ft_strncat(*ret_act, (s2 + 1), ft_strclchr((s2 + 1), c));
			ret_act++;
		}
		s2++;
	}
	return (ret);
}
