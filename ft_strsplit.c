/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:28:05 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/27 21:56:52 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **ret;
	char **ret_act;
	char *tmp;
	char const *s2;
	// params strncpy
	char *sn_dest;
	char const *sn_src;
	size_t sn_len;

	//tmp = ft_strnew(ft_strlen(s) - ft_strcchr(s, c));
	ret = NULL;
	ret_act = ret;
	s2 = s;
	while (*s2)
	{
		if ((*s2 == c) && (*(s2 + 1) != c) && (*(s2 + 1) != '\0'))
		{
			sn_src = (s2 + 1);
			sn_len = ft_strclchr((s2 + 1), c);

			tmp = ft_strnew(sn_len);
			ret_act = &tmp;
			ft_putendl("AFTER STRNEW");
			sn_dest = *ret_act;

			//ft_strncpy((*ret_act + ft_strlen((s2 + 1))), s2, ft_strcchr((s2 + 1), c));
			ft_strncpy(sn_dest, sn_src, sn_len);
			ret_act++;
		}
		s2++;
	}
	return (ret);
}
