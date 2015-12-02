/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:28:05 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/02 11:47:16 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**ret;
	char		**ret_act;
	char		*tmp;
	char const	*s2;
	char		*sn_dest;

	ret = NULL;
	ret_act = ret;
	s2 = s;
	while (*s2)
	{
		if ((*s2 == c) && (*(s2 + 1) != c) && (*(s2 + 1) != '\0'))
		{
			tmp = ft_strnew(ft_strclchr((s2 + 1), c));
			ret_act = &tmp;
			sn_dest = *ret_act;
			ft_strncpy(sn_dest, (s2 + 1), ft_strclchr((s2 + 1), c));
			ret_act++;
		}
		s2++;
	}
	return (ret);
}
