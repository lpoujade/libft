/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:00:57 by lpoujade          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/01 18:59:50 by lpoujade         ###   ########.fr       */
=======
/*   Updated: 2015/11/30 21:56:48 by lpoujade         ###   ########.fr       */
>>>>>>> 0e1f7d2b64d768151b3af686887f4e1b5a57ed9e
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char *cs1;
	unsigned char *cs2;
	if (n == 0)
		return (0);
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (*cs1 == *cs2)
	{
		n--;
		if (!n)
			return (0);
		cs1++;
		cs2++;
	}
	return (*cs1 - *cs2);
}
