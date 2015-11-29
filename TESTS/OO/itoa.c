#include "../libft.h"
int main(void)
{
	int nbr = -100;
	while (nbr <= 100)
	{
		ft_putendl(ft_itoa(nbr));
		nbr++;
	}
	return (0);
}
