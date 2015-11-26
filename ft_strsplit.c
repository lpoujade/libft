/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:28:05 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 22:22:32 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **ret;
	char **ret_act;
	char const *s2;
	// params strncpy
	char *sn_dest;
	char const *sn_src;
	size_t sn_len;

	ft_putstr("nb d occurence du caractere dans la chaine : ");
	ft_putnbr(ft_strcchr(s, c)); ft_putchar('\n');

	ret = (char **)ft_memalloc(ft_strlen(s) - ft_strcchr(s, c));
	ret_act = ret;
	s2 = s;
	while (*s2)
	{
		if ((*s2 == c) && (*(s2 + 1) != c && *(s2 + 1) != '\0'))
		{
			sn_dest = *ret_act;
			sn_src = (s2 + 1);
			sn_len = ft_strclchr((s2 + 1), c);
			ft_putnbr(sn_len);		ft_putendl(sn_src);

			*ret_act = "sssssssoooooooome";
			ft_putstr("ret_act! = ");ft_putendl(*ret_act);
			ft_putchar(**ret_act);ft_putchar('\n');
			*ret_act[3] = 'F';
			ft_putstr("ret_act! = ");ft_putendl(*ret_act);

			//ft_strncpy((*ret_act + ft_strlen((s2 + 1))), s2, ft_strcchr((s2 + 1), c));
			ft_putstr("ret_act! = ");ft_putendl(*ret_act);
			ret_act++;
		}
		s2++;
	}
	ft_putendl("QUIT STRSPLIT");
	return (ret);
}
