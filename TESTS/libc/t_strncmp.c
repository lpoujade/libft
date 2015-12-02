#include "../test.h"

int		t_strncmp(void)
{
	if (ft_strncmp("this", "this", 4) != strncmp("this", "this", 4))
		return (1);
	if (ft_strncmp("", "this", 4) != strncmp("", "this", 4))
		return (2);
	if (ft_strncmp("so\00is", "<that\0", 10) != strncmp("so\200is", "<that\0", 10))
		return (3);
	if (ft_strncmp("so\00is", "<that\0", 0) != strncmp("so\200is", "<that\0", 0))
		return (4);

	return (0);
}
