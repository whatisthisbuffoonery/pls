int	ft_iterative_factorial(int nb)
{
	int	i;
	i = nb;
	while (i < 1)
	{
		i --;
		nb *= i;
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb);
}
