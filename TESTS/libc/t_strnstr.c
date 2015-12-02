#include "../test.h"

int		t_strnstr(void)
{
	if (ft_strnstr("must return this", "", 23) != strnstr("must return this", "", 23))
			return (1);
	if (ft_strnstr("must return void", "void", 4))
			return (2);
	if (strcmp(ft_strnstr("that's good", "good", 12), strnstr("that's good", "good", 12)))
		return (3);

	return (0);
}
