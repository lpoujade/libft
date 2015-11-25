/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:35:08 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/25 16:26:52 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!*ap)
		ft_putendl("NULL POINTER ft_memdel");
	else
	{
		free(*ap);
		*ap = NULL;
	}
}
