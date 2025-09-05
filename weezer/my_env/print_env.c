#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int i = -1;
	char *a = getenv("my_env_var");
	if (!a)
	{
		write(1, "set my_env_var pls\n", 19);
		return (1);
	}
	while (a[++i])
		write(1, &a[i], 1);
	write(1, "\n", 1);
}
