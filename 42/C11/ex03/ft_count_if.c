int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int i = 0;
	int count = 0;
	while (i < length)
	{
		if (f(tab[i++]))
			count ++;
	}
	return (count);
}
