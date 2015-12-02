#include "../test.h"

int		t_strcpy(void)
{
	char f_d[20];
	char c_d[20];

	ft_strcpy(f_d, "somes words"); strcpy(c_d, "somes words");
	if (strcmp(f_d, c_d))
		return (1);

	ft_strcpy(f_d, "somes\0words"); strcpy(c_d, "somes\0words");
	if (strcmp(f_d, c_d))
		return (2);

	ft_strcpy(f_d, "somes words"); strcpy(c_d, "somes words");
	if (strcmp(f_d, c_d))
		return (3);

	ft_strcpy(f_d, ""); strcpy(c_d, "");
	if (strcmp(f_d, c_d))
		return (4);

	return (0);
}
