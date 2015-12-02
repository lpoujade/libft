#include "../test.h"

int		t_strchr(void)
{
	if (ft_strcmp(strchr("somes words ", ' '), strchr("somes words ", ' ')))
		return (1);
	if (ft_strcmp(strchr("ert", 'r'), strchr("ert", 'r')))
		return (2);
	if (ft_strcmp(strchr("blackhole", '\0'), strchr("blackhole", '\0')))
		return (3);
	return (0);
}
