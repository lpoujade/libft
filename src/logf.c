/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 11:33:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/10/19 11:38:00 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logf.h"

static t_logf	*create_logf(char *fname)
{
	t_logf	*new;

	if (!(new = malloc(sizeof(t_logf))))
	{
		ft_putendl_fd("not enough memory", 2);
		return (NULL);
	}
	if (!(new->fname = ft_strdup(fname)))
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	if ((new->fd = open(new->fname,
					O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR)) < 0)
	{
		ft_putstr_fd("can't open (for log) file ", 2);
		ft_putendl_fd(new->fname, 2);
		return (NULL);
	}
	ft_putendl_fd("-------------------------------------------------", new->fd);
	return (new);
}

static t_logf	*use_logf(char *fname)
{
	static t_logf	*list_logf = NULL;
	t_logf			*t;

	t = NULL;
	if (!fname)
		return (list_logf);
	if (!list_logf)
		return ((list_logf = create_logf(fname)));
	else
		while (ft_strcmp(list_logf->fname, fname))
		{
			if (!t || t == list_logf)
			{
				t = create_logf(fname);
				t->next = list_logf->next;
				t->prev = (t_list*)list_logf;
				t->next->prev = (t_list*)t;
				list_logf->next = (t_list*)t;
			}
			if (!t)
				t = list_logf;
			list_logf = (t_logf*)list_logf->next;
		}
	return (list_logf);
}

int				logf_quit(void)
{
	t_logf	*t;
	t_logf	*n;
	int		errcount;

	errcount = 0;
	if (!(t = use_logf(NULL)))
		ft_putendl_fd("logf_quit: can't retrieve logf's list", 2);
	while (t)
	{
		n = (t_logf*)t->next;
		ft_strdel(&t->fname);
		if (close(t->fd))
			errcount++;
		ft_memdel((void**)&t);
		t = n;
	}
	return (errcount);
}

int				logf_log(char *fname, char *msg)
{
	t_logf	*list_logf;

	if (!(list_logf = use_logf(fname)))
		ft_putendl_fd("LOGF error: can't retrieve/create log file", 2);
	ft_putendl_fd(msg, list_logf->fd);
	return (0);
}
