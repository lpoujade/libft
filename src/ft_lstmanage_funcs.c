/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmanages_funcs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 14:24:42 by lpoujade          #+#    #+#             */
/*   Updated: 2016/04/03 14:25:35 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tmp;

	tmp = lst;
	if (f)
	{
		while (tmp)
		{
			(f)(tmp);
			tmp = tmp->next;
		}
	}
}

void	ft_lstdel(t_list **alst, void (*del)(void *))
{
	t_list *tmp;
	t_list *nxt;

	tmp = *alst;
	while (tmp)
	{
		nxt = tmp->next;
		(del)(tmp);
		ft_memdel((void**)&tmp);
		tmp = nxt;
	}
	*alst = NULL;
}

void	ft_lstdelone(t_list **alst, void (*del)(void *))
{
	(del)((*alst));
	free(*alst);
	*alst = NULL;
}

/*
t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = malloc(content_size)))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

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
*/
