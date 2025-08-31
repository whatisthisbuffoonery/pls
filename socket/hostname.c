#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	char	*name = malloc(105);
	int		i = 0;

	while (i++ < 105)
		name[i] = 0;
	gethostname(name, 100);
	write(1, name, 100);
	write(1, "\n", 1);
	free(name);
}
