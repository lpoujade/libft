/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:00:10 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/14 18:11:41 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	p_lst(t_list *beg)
{
	t_list *tmp;

	tmp = beg;
	while(tmp)
	{
		write(1, tmp->content, 1);
		tmp = tmp->next;
	}
	ft_putchar('\n');ft_putchar('\n');
}

void 	lst_up(t_list *node)
{
	int *tmp;

	tmp = node->content;
	*tmp = ft_toupper(*tmp);
	node->content = tmp;
}

void	del(void *node, size_t size)
{
	free(node);
	ft_bzero(node, size);
}

t_list	*lst_down(t_list *node)
{
	int *tmp;
	t_list *new;

	new = ft_lstnew(node->content, node->content_size);
	tmp = new->content;
	*tmp = ft_tolower(*tmp);
	new->content = tmp;
	return (new);
}


int		main(void)
{
	t_list *alph;
	t_list *new;
	t_list *maped;
	int c = 'a';

	maped = NULL;
	alph = ft_lstnew(&c, sizeof(c));
	while (c < 'z')
	{
		c++;
		new = ft_lstnew(&c, sizeof(c));
		ft_lstadd(&alph, new);
	}
	p_lst(alph);

	ft_putendl("lstiter upper");
	ft_lstiter(alph, (lst_up));
	p_lst(alph);

	ft_putendl("lstmap lower");
	maped = ft_lstmap(alph, (lst_down));
	if (maped)
		p_lst(maped);
	else
		ft_putendl("no list\n\n");

	new = alph;
	while (new->next)
		new = new->next;

	ft_lstdelone(&new, (del));
	p_lst(alph);

	ft_lstdel(&alph, (del));
	ft_putendl("lstdel executed");
	if (alph)
		p_lst(alph);
	else
		ft_putendl("hm, no more lst");


	return (0);
}
