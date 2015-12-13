/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:00:10 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/13 11:17:29 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

int		main(void)
{
	t_list *alph;
	t_list *new;
	int c = 'a';

	int	*tmp = NULL;

	alph = ft_lstnew(&c, sizeof(c));
	while (c < 'z')
	{
		c++;
		new = ft_lstnew(&c, sizeof(c));
		ft_lstadd(&alph, new);
	}
	p_lst(alph);

	new = alph;
	while (new)
	{
		tmp = new->content;
		*tmp = ft_toupper(*tmp);
		new->content = tmp;
		new = new->next;
	}
	p_lst(alph);


	return (0);
}
