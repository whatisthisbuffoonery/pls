int	ft_sqrt(int nb)
{
	i = 1;
	if (nb < 1)
		return (0);
	while (i * i < nb)
		i ++;
	if (i * i > nb)
		return (0);
	return (i);
}
