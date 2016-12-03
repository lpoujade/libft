#include "libft.h"

int main(int ac, char **av)
{
	size_t i = 0;
	char **r;

	if (ac < 3)
	{
		ft_putendl("missing parameters");
		exit (1);
	}
	r = ft_strsplit(av[1], av[2]);
	while (r[i])
	{
		ft_putnbr(i); ft_putstr("\t: ");
		ft_putendl(r[i]);
		free(r[i]);
		i++;
	}
	free(r);
}
