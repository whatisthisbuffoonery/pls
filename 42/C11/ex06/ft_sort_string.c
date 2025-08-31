void	ft_sort_string_tab(char **tab)
{
	int i = -1;
	int k = 1;
	int j;
	char *swap;
	while (tab[k])
	{
		j = 0;
		i ++;
		k = i + 1;
		while (tab[i][j])
		{
			if (tab[i][j] > tab[k][j])
			{
				swap = tab[i];
				tab[i] = tab[k];
				tab[k] = swap;
				i = -1;
				break ;
			}
			j ++;
		}
	}
}
