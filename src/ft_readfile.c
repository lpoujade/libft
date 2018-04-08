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

int		ft_readfile(char *fname, char **buf, size_t buflen, int rev)
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

int		ft_readfile_rev(char *fname, char **buf, size_t buflen)
{
	char	**ibuf;
	int		fd;
	size_t	ibufsize;
	int		i;
	int		icp;

	ibufsize = 100;
	i = 0;
	icp = 0;
	fd = open(fname, O_RDONLY);
	if (fd < 0)
		return (-1);
	if (!(ibuf = ft_memalloc(ibufsize)))
		return (-2);
	ft_printf("GO ");
	while (get_next_line(fd, &(ibuf[i])) > 0)
	{
		ft_printf("%d, ", i);
		i++;
		if ((size_t)i == ibufsize - 1)
		{
			ft_printf(" [realloc] ");
			break ;
			if (!(ibuf = ft_realloc(&ibuf, ibufsize, ibufsize + 100)))
				return (-2);
			ibufsize += 100;
		}
	}
	ft_printf(" OUT\n");
	while (icp < (int)buflen && i >= 0)
	{
		buf[icp++] = ibuf[i];
		--i;
	}
	close(fd);
	return (0);
}
