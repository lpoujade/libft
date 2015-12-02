#include "../test.h"

int		t_strlcat(void)
{
	char f_d[20];
	char c_d[20];

	if (ft_strlcat(f_d, "Monde de merde", 10) != strlcat(c_d, "Monde de merde", 10))
		return (1);
	if (ft_strlcat(f_d, "Oooooooooooh Geeeorge !", 20) != strlcat(f_d, "Oooooooooooh Geeeorge !", 20))
		return (2);

	return (0);
}
