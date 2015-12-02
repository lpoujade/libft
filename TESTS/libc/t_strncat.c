#include "../test.h"

int		t_strncat(void)
{
	char f_d[30] = "4577";
	char c_d[30] = "4577";

	if (strcmp(ft_strncat(f_d, "la menuiserie\0mec", 3), strncat(c_d, "la menuiserie\0mec", 3)))
		return (1);
	if (strcmp(ft_strncat(f_d, "la menuiserie\0mec", 0), strncat(c_d, "la menuiserie\0mec", 0)))
		return (2);

	return (0);
}
