#include "../test.h"

int		t_strlcat(void)
{
	char f_d[40] = "Il dit : ";
	char c_d[40] = "Il dit : ";

	if (ft_strlcat(f_d, "Monde de merde", 10) != strlcat(c_d, "Monde de merde", 10))
	{
		ft_putendl_fd("FT/STRLCAT DIFFS : ", 2);
		ft_putendl_fd(f_d, 2);ft_putendl_fd(c_d, 2);
		return (1);
	}
	if (ft_strlcat(f_d, "Oooooooooooh Geeeorge !", 20) != strlcat(f_d, "Oooooooooooh Geeeorge !", 20))
		return (2);

	return (0);
}
