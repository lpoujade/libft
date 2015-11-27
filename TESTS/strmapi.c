#include "../libft.h"

int	main(int ac, char **av)
{
	int (*ptf)(int);

	ptf = &ft_toupper;
	if (ac == 0)
		ft_putendl("Need at least one argument");
	else
		ft_putendl(ft_strmap(av[1], (*ptf)(av[1][1])));
	return (0);
}

