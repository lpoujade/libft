#include "../test.h"

int		t_strlcat(void)
{
	int ret = 0;
	char f_d[40] = "Il dit : ";
	char c_d[40] = "Il dit : ";
	size_t f_res = 0, c_res = 0;

	if ((f_res = ft_strlcat(f_d, "Monde de merde", 24) != (c_res = strlcat(c_d, "Monde de merde", 24))))
	{
		ft_putendl_fd("FT/STRLCAT DIFFS TEST 1: ", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putnbr_fd(c_res, 2);ft_putstr_fd(" - ", 2);ft_putstr_fd(c_d, 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putnbr_fd(f_res, 2);ft_putstr_fd(" - ", 2);ft_putstr_fd(f_d, 2);
		ft_putchar_fd('\n', 2);

		ret = 100;
	}
	if ((f_res = ft_strlcat(f_d, " - Oh George !", 38)) != (c_res = strlcat(c_d, " - Oh George !", 38)))
	{

		ft_putendl_fd("FT/STRLCAT DIFFS TEST 2: ", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putnbr_fd(c_res, 2);ft_putstr_fd(" - ", 2);ft_putstr_fd(c_d, 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putnbr_fd(f_res, 2);ft_putstr_fd(" - ", 2);ft_putstr_fd(f_d, 2);
		ft_putchar_fd('\n', 2);

		ret = ret + 2;
	}
	memset(f_d, '\0', 40);memset(c_d, '\0', 40);
	strcpy(f_d, "abc");strcpy(c_d, "abc");
	if ((f_res = ft_strlcat(f_d, "abcdefghijklmnop", 2)) != (c_res = strlcat(c_d, "abcdefghijklmnop", 2)))
	{

		ft_putendl_fd("FT/STRLCAT DIFFS TEST 2: ", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putnbr_fd(c_res, 2);ft_putstr_fd(" - ", 2);ft_putstr_fd(c_d, 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putnbr_fd(f_res, 2);ft_putstr_fd(" - ", 2);ft_putstr_fd(f_d, 2);
		ft_putchar_fd('\n', 2);

		ret = ret + 3;
	}
	return (ret);
}
