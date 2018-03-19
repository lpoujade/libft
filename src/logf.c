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
	new->next = new;
	new->prev = new;
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
		return (NULL);
	if (!ft_strcmp(fname, "__last__"))
		return (list_logf);
	if (!list_logf)
		return ((list_logf = create_logf(fname)));
	else
		while (ft_strcmp(list_logf->fname, fname))
		{
			if (t == list_logf)
			{
				t = create_logf(fname);
				t->next = list_logf->next;
				t->prev = (t_list*)list_logf;
				if (t->next)
					t->next->prev = (t_list*)t;
				list_logf->next = (t_list*)t;
				return (t);
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
	t_logf	*o;
	int		errcount;

	errcount = 0;
	o = NULL;
	if (!(t = use_logf("__last__")))
		ft_putendl_fd("logf_quit: can't retrieve logf's list", 2);
	while (t != o)
	{
		if (!o)
			o = t;
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
	{
		ft_putendl_fd("LOGF error: can't retrieve/create log file", 2);
		return(-1);
	}
	ft_putstr_fd(msg, list_logf->fd);
	return (0);
}

static void		_print_format(char *f, va_list ap, int fd)
{
	char	*s;
	int		d;

	if (*f == 's')
	{
		s = (char *)va_arg(ap, char *);
		if (s)
			ft_putstr_fd(s, fd);
		else
			ft_putstr_fd("(null)", fd);
	} else if (*f == 'd')
	{
		d = (int)va_arg(ap, int);
		ft_putnbr_fd(d, fd);
	} else if (*f == '%')
		ft_putchar_fd('%', fd);
}

int				logf_log_format(char *fname, char *msg_format, ...)
{
	unsigned int	next;
	int				i;
	t_logf			*l;
	va_list			ap;
	char			*tmp;

	i = 0;
	va_start(ap, msg_format);
	if (!(l = use_logf(fname)))
		return(-1);
	while(msg_format[i])
	{
		next = ft_strclchr(msg_format + i, '%');
		if (next == ft_strlen(msg_format + i))
		{
			ft_putstr_fd(msg_format + i, l->fd);
			break ;
		}
		if (next > 0)
		{
			tmp = ft_strsub(msg_format + i, 0, next);
			ft_putstr_fd(tmp, l->fd);
			free(tmp);
		}
		_print_format(msg_format + i + next + 1, ap, l->fd);
		i += next + 2;
	}
	va_end(ap);
	return(0);
}

int				logf_getfd(char *fname)
{
	t_logf	*list_logf;

	if (!(list_logf = use_logf(fname)))
	{
		ft_putendl_fd("LOGF error: can't retrieve/create log file", 2);
		return(-1);
	}
	return(list_logf->fd);
}
