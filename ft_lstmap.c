/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.ccts/libft/ft_lstmap.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:45:26 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/13 11:31:29 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*ntmp;

	tmp = lst;
	if (!(new = (t_list *)malloc(sizeof(new))))
		return (NULL);
	ntmp = new;
	while (tmp)
	{
		ntmp = (f)(tmp);
		tmp = tmp->next;
		ntmp = ntmp->next;
	}
	return (new);
}
