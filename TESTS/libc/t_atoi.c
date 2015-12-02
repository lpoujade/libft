#include "../test.h"

int		t_atoi(void)
{
	if (ft_atoi("4577") != atoi("4577"))
		return (1);
	if (ft_atoi("-42") != atoi("-42"))
		return (2);
	if (ft_atoi("ft12") != atoi("ft12"))
		return (3);
	if (ft_atoi("+5643") != atoi("+5643"))
		return (4);
	if (ft_atoi(" \t45h") != atoi(" \t45h"))
		return (5);
	if (ft_atoi("+-12\r") != atoi("+-12\r"))
		return (6);

	return(0);
}
