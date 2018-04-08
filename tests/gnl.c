#include "libft.h"

int	main(int ac, char **av)
{
	char	*l;
	int		fd;

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		ft_printf("can't open '%s'\n", av[1]);
		return (EXIT_FAILURE);
	}
	while (get_next_line(fd, &l) > 0)
	{
		ft_printf("%s\n", l);
		free(l);
	}
	close(fd);
	return (EXIT_SUCCESS);
}
