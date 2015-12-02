#include "../test.h"

int		t_strcmp(void)
{
	if (ft_strcmp("this", "this") != strcmp("this", "this"))
		return (1);
	if (ft_strcmp("", "this") != strcmp("", "this"))
		return (2);
	if (ft_strcmp("so\00is", "<that\0") != strcmp("so\200is", "<that\0"))
		return (3);

	return (0);
}
