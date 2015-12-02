#include "../test.h"

int		t_strlen(void)
{
	if (ft_strlen("La Grande Question,") != strlen("La Grande Question,"))
		return (1);
	if (ft_strlen("") != strlen(""))
		return (2);

	return (0);
}
