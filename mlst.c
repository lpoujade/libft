/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:00:10 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/14 12:35:50 by liumsade         ###   ########.fr       */
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

void  lst_up(t_list *node)
{
    int *tmp;

    tmp = node->content;
    *tmp = ft_toupper(*tmp);
    node->content = tmp;
}

void    del(void *node, size_t size)
{
    (void)node;
    (void)size;
}

int		main(void)
{
    t_list *alph;
    t_list *new;
    int c = 'a';

    void (*pfunc)(t_list *);
    pfunc = lst_up;

    alph = ft_lstnew(&c, sizeof(c));
    while (c < 'z')
    {
        c++;
        new = ft_lstnew(&c, sizeof(c));
        ft_lstadd(&alph, new);
    }
    p_lst(alph);

    ft_lstiter(alph, (pfunc));
    p_lst(alph);

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
