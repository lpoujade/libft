/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.ccts/libft/ft_lstdel.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:14:01 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/13 21:46:22 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while (*alst)
	{
		ft_lstdelone(alst, (del));
		*alst = (*alst)->next;
	}
	*alst = NULL;
}
