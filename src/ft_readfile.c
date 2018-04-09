/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft/src/ft_readfile.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:17:31 by lpoujade          #+#    #+#             */
/*   Updated: 2018/04/08 17:17:31 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_readfile(char *fname, char **buf, size_t buflen, int rev)
{
	int	fd;
	int	i;
	int	r;

	i = (rev ? buflen - 1 : 0);
	fd = open(fname, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (i < (int)buflen && i >= 0)
	{
		if (get_next_line(fd, buf + i) < 0)
			break ;
		i = (rev ? i - 1 : i + 1);
	}
	close(fd);
	return (0);
}

static int	fill_ibuf(char **ibuf, size_t ibufsize, int fd)
{
	int	i;

	i = 0;
	while (get_next_line(fd, &(ibuf[i])) > 0)
	{
		i++;
		if ((size_t)i == ibufsize - 1)
		{
			if (!(ibuf = ft_realloc(&ibuf, ibufsize, ibufsize + 100)))
				return (-2);
			ibufsize += 100;
		}
	}
	return (0);
}

int			ft_readfile_rev(char *fname, char **buf, size_t buflen)
{
	char	**ibuf;
	int		fd;
	size_t	ibufsize;
	int		i;
	int		icp;

	ibufsize = 100;
	i = 0;
	icp = 0;
	if ((fd = open(fname, O_RDONLY)) < 0)
		return (-1);
	if (!(ibuf = ft_memalloc(ibufsize)))
		return (-2);
	if (fill_ibuf(ibuf, ibufsize, fd))
		return (-2);
	while (icp < (int)buflen && i >= 0)
		buf[icp++] = ibuf[i--];
	close(fd);
	return (0);
}
