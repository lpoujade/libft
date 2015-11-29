#include "../libft.h"

char c2c(char c);

int	main(int ac, char **av)
{
	char (*ptf)(char);

	ptf = &c2c;

	if (ac <= 1)
		ft_putendl("Need at least one argument");
	else
	{
		ft_putendl("ELSE");ft_putendl(av[1]);
		ft_putendl(ft_strmap(av[1], (*ptf)));
	}
	return (0);
}
