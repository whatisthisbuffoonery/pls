int	ft_iterative_power(int nb, int power)
{
	while (power > 1)
	{
		nb *= nb;
		power --;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
}
