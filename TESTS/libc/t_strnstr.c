#include "../test.h"

int		t_strnstr(void)
{
	int ret = 0;
	if (ft_strnstr("must return this", "", 23) != strnstr("must return this", "", 23))
			ret = 100;
	if (ft_strnstr("must return void", "void", 4))
			ret = ret + 20;
	if (strcmp(ft_strnstr("that's good", "good", 12), strnstr("that's good", "good", 12)))
		ret = ret + 3;

	return (0);
}
