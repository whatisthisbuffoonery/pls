#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	i = 0;
	while (v[0][i])
	{
		write(1, &v[0][i], 1);
		i ++;
	}
	write(1, '\n', 1);
}
