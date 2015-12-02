#include "../test.h"

int		t_strstr(void)
{
	if (ft_strstr("must return this", "") != strstr("must return this", ""))
			return (1);
	if (ft_strstr("must return", "void"))
			return (2);
	if (strcmp(ft_strstr("that's good", "good"), strstr("that's good", "good")))
		return (3);

	return (0);
}
