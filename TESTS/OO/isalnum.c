#include "../libft.h"

char	c2c(char c);

int main(int ac, char **av)
{
	ft_putendl(ft_strmap(av[ac-1], (&c2c)));
	return (0);
}
