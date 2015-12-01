/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:54:22 by lpoujade          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/01 19:00:23 by lpoujade         ###   ########.fr       */
=======
/*   Updated: 2015/11/30 23:29:41 by lpoujade         ###   ########.fr       */
>>>>>>> 0e1f7d2b64d768151b3af686887f4e1b5a57ed9e
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
<<<<<<< HEAD
	size_t i;
	char *s;

	s = (char *)s1;
	if (!*s2 || !s2)
		return ((char *)s1);
	while (s1 && *s && n)
	{
		i = 0;
		n--;
		while (s[i] == s2[i])
		{
			i++;
			if (!s2[i])
				return (s);
		}
		s++;
	}
	return (NULL);

=======
	char *s1_n;
	char *ret;

	s1_n = ft_strndup(s1, n);
	ret = ft_strstr(s1_n, s2);
	ft_strdel(&s1_n);
	return (ret);
>>>>>>> 0e1f7d2b64d768151b3af686887f4e1b5a57ed9e
}
