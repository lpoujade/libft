#include "../test.h"

int		t_strrchr(void)
{
	if (strcmp(ft_strrchr("I live in the see !", 'e'), strrchr("I live in the see !", 'e')))
		return (1);
	if (strcmp(ft_strrchr("word", '\0'), strrchr("word", '\0')))
		return (2);
	return (0);
}
