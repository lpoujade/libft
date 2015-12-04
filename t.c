#include "libft.h"

int 	main(void)
{
	char **splitted;

	splitted = ft_strsplit("space separed words", ' ');
	ft_putendl(*splitted);
	while (*splitted)
	{
		ft_putendl(*splitted);
		splitted++;
	}
	return (0);
}
