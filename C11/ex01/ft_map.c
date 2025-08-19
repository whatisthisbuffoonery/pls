#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i = 0;
	int *a = malloc((length + 1) * sizeof(int));
	while (i < length)
		a[i] = f(tab[i++]);
	return a;
}
