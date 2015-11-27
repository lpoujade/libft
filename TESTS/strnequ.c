#include "../libft.h"
int main(int ac, char **av)
{

	if (ac >= 2)
	{
		ft_putnbr( ft_strnequ(av[ac-1], av[ac-2], 100) );
	}
	else
		ft_putendl("Need at least one more argument");

	return (0);
}
