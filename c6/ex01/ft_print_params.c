#include <unistd.h>

int	main(int c, char **v)
{
	int	i;
	int	k;

	k = 1;
	while (k < c)
	{
		i = 0;
		while (v[k][i])
		{
			write(1, &v[k][i], 1);
			i ++;
		}
		k ++;
		write(1, '\n', 1);
	}
}
