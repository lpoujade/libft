/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:45:26 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/14 18:41:40 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*d_new;

	d_new = NULL;
	if (lst && f)
	{
		new = ft_lstnew(NULL, 0);
		d_new = new;
		tmp = lst;
		while (tmp)
		{
			ft_memcpy(new, (*f)(tmp), sizeof(t_list));
			if (tmp->next)
				new->next = ft_lstnew(NULL, 0);
			new = new->next;
			tmp = tmp->next;
		}
	}
	return (d_new);
}
