/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/lists.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:50:35 by lpoujade          #+#    #+#             */
/*   Updated: 2016/03/24 22:30:19 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->prev = (*alst)->prev;
	new->next = (*alst);
	if ((*alst)->prev)
		(*alst)->prev->next = new;
	else
		*alst = new;
	(*alst)->prev = new;
}

int		ft_lstinsert_list(t_list *fflist, t_list *ffnew, int (*f)(t_list*, t_list*))
{
	t_list		*tmp;
	t_list		*end_new;
	int			ret;

	if (!fflist)
	{
		fflist = ffnew;
		return (0);
	}
	ret = 0;
	tmp = fflist;
	end_new = ffnew;
	while (end_new->next && ++ret)
		end_new = end_new->next;
	while (((f)(ffnew, tmp)) > 0 && tmp->next)
		tmp = tmp->next;
	if (tmp->next)
	{
		ffnew->prev = tmp;
		end_new->next = tmp->next;
		tmp->next = ffnew;
	}
	else
	{
		tmp->next = ffnew;
		ffnew->prev = tmp;
	}
	return (ret);
}

void	ft_lstinsert(t_list **fflist, t_list *new, int (*f)(t_list*, t_list*))
{
	t_list		*tmp;
	int			comp;

	if (!*fflist)
	{
		*fflist = new;
		return ;
	}
	tmp = (*fflist);
	while (((comp = (f)(new, tmp))) > 0 && tmp->next)
		tmp = tmp->next;
	if (comp > 0)
	{
		if (tmp->next)
			tmp->next->prev = (t_list*)new;
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		new->prev = tmp->prev;
		new->next = tmp;
		if (tmp->prev)
			tmp->prev->next = new;
		else
			*fflist = new;
		tmp->prev = new;
	}
}

void	ft_lstappend(t_list *alst, t_list *new)
{
	t_list	*tmp;

	tmp = alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
}

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
