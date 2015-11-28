/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:16:09 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 13:29:58 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t len)
{
	c = (unsigned char)c;
	void *ret;
	char *tmp_d;
	char const *tmp_s;
	int index;

	index = 0;
	tmp_d = (char *)dest;
	tmp_s = (char const *)src;
	while (len && tmp_s[index] != c)
	{
		tmp_d[index] = tmp_s[index];
		len--;
		index++;
	}
	if (tmp_s[index] == c)
		ret = (void *)(tmp_s + (index + 1));
	else
		ret = NULL;

	return (ret);
}
