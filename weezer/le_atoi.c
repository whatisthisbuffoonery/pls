#include <unistd.h>

int	le_atoi(char *src)
{
	int	a = 0;
	int	i = 0;
	int	flag = 1;

	while (src[i] == 32 || (src[i] < 14 && src[i] > 8))
		i ++;
	if (src[i] == 43 || src[i] == 45)
	{
		if (src[i] == 45)
			flag = -1;
		i ++;
	}
	if (src[i] == 43 || src[i] == 45)
		return (a);
	while (src[i] > 47 && src[i] < 58)
	{
		a *= 10;
		a += src[i] - 48;
		i ++;
	}
	return (a * flag);
}
