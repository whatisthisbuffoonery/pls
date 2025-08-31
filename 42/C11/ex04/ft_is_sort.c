int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i = 0;
	int k = 1;
	int h = 0;
	while (h == 0 && k < length)
		h = f(tab[i++], tab[k++]);
	while (k < length)
		if (f(tab[i++], tab[k++]) == 0 - h)
			return (0);
	return (1);
}
