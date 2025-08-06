#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min > max)
	{
		range[0] = (NULL);
		return (0);
	range[0] = malloc(4 * (max - min));
	if (!range[0])
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min ++;
		i ++;
	}
		return (range[0]);
}