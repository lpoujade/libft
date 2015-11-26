/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:49:24 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 17:39:12 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *ret;
	int len;
	int cd;
	int cf;

	cd = 0;
	cf = 0;
	len = (ft_strlen(s) - 1);

	while (s[cd] == ' ' || s[cd] == '\n' || s[cd] == '\t')
		cd++;

	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		len--;
		cf++;
	}

	if ((cf + cd) != 0)
	{
		ret = ft_strnew(strlen(s) - (cd + cf));
		ft_strncpy(ret, (s + cd), (strlen(s) - (cd + cf)));
	}
	else
		ret = strdup(s);
	return (ret);
}
