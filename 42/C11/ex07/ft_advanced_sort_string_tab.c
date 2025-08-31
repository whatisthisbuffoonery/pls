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

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i = 0;
	int k = 1;
	char *swap;
	while (tab[k])
	{
		if (cmp(tab[i], tab[k]) > 0)
		{
			swap = tab[i];
			tab[i] = tab[k];
			tab[k] = swap;
			i = -1;
			k = 0;
		}
		i ++;
		k ++;
	}
}

int	main(int c, char **v)
{
	int i = 1;
	if (c < 2)
	{
		write(1, "gib strings\n", 12);
		return (0);
	}
	ft_advanced_sort_string_tab(v + 1, ft_strcmp);
	while (v[i])
	{
		ft_putstr(v[i++]);
		write(1, "\n", 1);
	}
}
