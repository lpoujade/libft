
#include "libft.h"

int		stack_indent(int fd)
{
	int ret;
	void *buffer[100];
	//char **symbols = NULL;

	ret = backtrace(buffer, 100);
	//symbols = backtrace_symbols()
	if (fd >= 0)
		while (ret--)
			ft_putchar_fd('|', fd);
	return 0;
}

