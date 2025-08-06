#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min > max)
		return (NULL);
	arr = malloc(4 * (max - min));
	if (!arr)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i ++;
	}
	return (arr);
}