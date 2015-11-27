#include "../libft.h"

int main(int ac, char **av)
{
	char **splitted;
	
	if (ac != 2 && ft_strlen(av[ac-2]) != 1)
		ft_putendl("Exactly 2 args : 1st of 1 char, and a string");
	else
	{
		ft_putstr("Split \"");ft_putstr(av[ac-1]);ft_putstr("\" with ");ft_putendl(av[ac-2]);
		splitted = ft_strsplit(av[ac-1], *av[ac-2]);
		ft_putendl(*splitted);
	}
	return (0);
}
