#include "../test.h"

int		t_strncpy(void)
{
	int len = 30;
	char f_d[len];
	char c_d[len];

	ft_strncpy(f_d, "somes words", 5); strncpy(c_d, "somes words", 5);
	if (strcmp(f_d, c_d))
		return (1);

	ft_strncpy(f_d, "somes\0words", 15); strncpy(c_d, "somes\0words", 15);
	if (strcmp(f_d, c_d))
		return (2);

	ft_strncpy(f_d, "somes words", 0); strncpy(c_d, "somes words", 0);
	if (strcmp(f_d, c_d))
		return (3);

	ft_strncpy(f_d, "", 10); strncpy(c_d, "", 10);
	if (strcmp(f_d, c_d))
		return (4);

	return (0);
}
