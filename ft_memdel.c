/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:35:08 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/24 17:43:53 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!*ap)
		ft_putendl_fd("NULL POINTER ft_memdel", 2);
	else
	{
		ft_putstr("APPEL A FREE");
		free(ap);
		*ap = NULL;
	}
}
