#include "../libft.h"
int main(int ac, char **av)
{
	if (ac == 1 || ft_strlen(av[1]) != 1)
		ft_putendl("Type only one argument of one char.");
	else
		ft_putnbr(ft_isupper(av[1][0]));
	return (0);
}
