

//not even posix will adopt you


#include <unistd.h>

int	ft_strlen(char *a)
{
	int i = 0;
	while (a[i++]);
	return (i);
}

int	main(int c, char **v, char **env) //env can be named whatever
{
	(void) c;
	(void) v;
	int i = -1;
	while (env[++i])
		write(1, env[i], ft_strlen(env[i]));
	write(1, "\n", 1);
}
