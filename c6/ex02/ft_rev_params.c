int	main(int c, char **v)
{
	int	i;

	while (c < 1)
	{
		i = 0;
		while (v[c - 1][i])
		{
			write(1, &v[c - 1][i], 1);
			i ++;
		}
		c --;
		write(1, '\n', 1);
	}
}
