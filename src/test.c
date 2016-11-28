#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <assert.h>
#include <pthread.h>
#include "libft.h"
#include "ft_printf.h"

void sighandler(int signum)__attribute__((noreturn));
void *test_a(void *n);
void *test_b(void *n);

typedef struct	s_test
{
	char		*name;
	pthread_t	tf;
	int			c_ret;
	int pad;
}				t_test;

__attribute__((noreturn))
void sighandler(int signum)
{
	char *t;
	pthread_t self = pthread_self();

	ft_sprintf(&t, "THREAD %lu -- signal %d, quitting\n", self, signum);
	ft_putstr(t);
	free(t);
	pthread_exit(NULL);
}

int main(void)
{
	struct sigaction shandler;
	char	*tmp;
	int		nb_test, c = 0;
	t_test	tests[2];

	if (sigfillset(&shandler.sa_mask) == -1)
		perror("ERROR ---- setting signals: ");
	shandler.sa_handler = &sighandler;
	//shandler.sa_flags = SA_SIGINFO;
	if (sigaction(SIGSEGV, &shandler, NULL) == -1)
	{
		ft_putendl("ERROR ---- setting segv handler");
		exit (1);
	}

	nb_test = 2;
	tests[0].name = ft_strdup("Test A");
	tests[1].name = ft_strdup("Test B");

	if ((tests[0].c_ret = pthread_create(&(tests[0].tf), NULL, &test_a, NULL)) ||
			(tests[1].c_ret = pthread_create(&(tests[1].tf), NULL, &test_b, NULL)))
	{
		ft_sprintf(&tmp, "ERROR ---- threads NOT started :\n%s %d\n%s %d\n", tests[0].name, 
				tests[0].c_ret, tests[1].name, tests[1].c_ret);
		ft_putstr(tmp);
		free(tmp);
	}


	ft_sprintf(&tmp, "INFO ---- threads started\n");
	ft_putstr(tmp);
	free(tmp);
	while (c < nb_test)
	{
		pthread_join(tests[c].tf, NULL);
		c++;
	}
	ft_putendl("Tested !");
	exit (0);
}

/*
pid_t fork_wr(int (*f)(void))
{
	pid_t t;

	if ((t = fork()))
		return t;
	return ((f)());
}
*/

void	*test_a(void *n)
{
	assert(1);// != 1);
	char *c = (char *)n;
	*(c + 1) = 1;
	return (0);
}

void	*test_b(void *n)
{
	(void)n;
	//assert(1 != 1);
	return (0);
}
