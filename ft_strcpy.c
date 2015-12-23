/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:21:24 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/20 18:10:03 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char const *src)
{
	char *origin;
	char *tmp;

	origin = dest;
	tmp = (char *)src;
	while (*tmp)
	{
		*dest = *tmp;
		dest++;
		tmp++;
	}
	*dest = *tmp;
	return (origin);
}
