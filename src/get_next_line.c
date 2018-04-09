/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 11:39:55 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/03 12:12:11 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		buff_delfline(t_file *f)
{
	char	*new;
	int		offset;

	new = NULL;
	if (!f->buff)
		return (-1);
	offset = ft_strclchr(f->buff, '\n');
	if (!(new = ft_memalloc(f->buff_size - offset + 1)))
		return (-3);
	new = ft_memcpy(new, (f->buff + 1 + offset), f->buff_size - offset);
	free(f->buff);
	f->buff = new;
	f->buff_size -= offset;
	return (0);
}

static int		buf_read_add(t_file *f)
{
	char	*tmp;
	int		len;
	int		read_index;

	if (!f->buff)
		return (-1);
	if (!(tmp = ft_memalloc(f->buff_size)))
		return (-3);
	tmp = ft_memcpy(tmp, f->buff, f->buff_size);
	free(f->buff);
	if (!(f->buff = ft_memalloc(f->buff_size + BUFF_SIZE + 1)))
		return (-3);
	f->buff = ft_memcpy(f->buff, tmp, f->buff_size);
	free(tmp);
	read_index = (int)read(f->fd, (f->buff + ft_strlen(f->buff)), BUFF_SIZE);
	f->buff_size += read_index;
	return (read_index);
}

static t_file	*f_add(int fd, t_file *link)
{
	t_file	*ret;

	if (!(ret = (t_file *)ft_memalloc(sizeof(t_file))))
		return (NULL);
	ret->fd = fd;
	ret->buff = (char *)ft_memalloc(2);
	*(ret->buff) = '0';
	ret->buff_size = 0;
	if (!link)
		ret->nxt = NULL;
	else if (!link->nxt)
	{
		ret->nxt = link;
		link->nxt = ret;
	}
	else if (link->nxt)
	{
		while (link->nxt != link)
			link = link->nxt;
		ret->nxt = link->nxt;
		link->nxt = ret;
	}
	return (ret);
}

static void		free_node(t_file **file)
{
	t_file *t;

	t = NULL;
	if ((*file)->buff)
		ft_strdel(&((*file)->buff));
	if ((*file)->nxt)
	{
		while (t != (*file))
		{
			t = (t ? t : *file);
			if (t->nxt == (*file))
			{
				t->nxt = (*file)->nxt;
				break ;
			}
			t = t->nxt;
		}
		t = (*file)->nxt;
		ft_memdel((void **)file);
		*file = t;
	}
	else
		ft_memdel((void **)file);
}

int				get_next_line(int const fd, char **line)
{
	static t_file	*f = NULL;
	int				ret;
	int				s_fd;

	ret = 0;
	if (fd < 0 || !line || read(fd, NULL, 0) != 0)
		return (-1);
	s_fd = (f) ? f->fd : -1;
	while (!f || f->fd != fd)
	{
		f = (f && f->nxt ? f->nxt : f);
		f = (!f || f->fd == s_fd ? f_add(fd, f) : f);
	}
	s_fd = 1;
	while (s_fd > 0 && f->buff && !ft_strchr(f->buff, '\n'))
		ret = (((s_fd = buf_read_add(f)) < 0) ? -1 : ret);
	if ((s_fd || *f->buff) && (*line = ft_strnew(ft_strclchr(f->buff, '\n'))))
		ret = (ft_strncpy(*line, f->buff, ft_strclchr(f->buff, '\n')) ? 1 : -1);
	else if (s_fd || *f->buff)
		ret = -1;
	ret = (buff_delfline(f) ? -1 : ret);
	if (ret <= 0)
		free_node(&f);
	return ((ret == 1 && !f->buff) ? 0 : ret);
}
