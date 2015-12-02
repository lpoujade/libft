#include "../test.h"

int		t_strcat(void)
{
	char f_d[30] = "4577";
	char c_d[30] = "4577";

	if (strcmp(ft_strcat(f_d, "la menuiserie\0mec"), strcat(c_d, "la menuiserie\0mec")))
		return (1);
	if (strcmp(ft_strcat(f_d, ""), strcat(c_d, "")))
		return (2);

	return (0);
}
