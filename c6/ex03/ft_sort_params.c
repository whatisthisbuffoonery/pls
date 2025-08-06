#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	return (0);
}

int	main(int c, char **v)
{
	int	i;
	int	flag;
	char	*swap;

	i = 1;
	flag = 0;
	while (v[i + 1])
	{
		if (ft_strcmp < 0)
		{
			swap = v[i];
			v[i] = v[i + 1];
			v[i + 1] = swap;
			flag ++;
		}
		i ++;
		if (flag > 0)
		{
			i = 1;
			flag = 0;
		}
	}
}
