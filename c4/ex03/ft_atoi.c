int	ft_atoi(char *str)
{
	int	i;
	int	flag;
	int	a;

	i = 0;
	a = 0;
	flag = 0;
	while (str[i] == 32 || (str[i] > 8 && str < 14))
		i ++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			flag ++;
		i ++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		a *= 10;
		a = a + str[i] - 48;
		i ++;
	}
	if (flag % 2 == 1)
		a = 0 - a;
	return (a);
}
