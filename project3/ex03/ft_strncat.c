char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[a])
		a ++;
	while (i < nb && src[i])
	{
		dest[a + i] = src[i];
		i ++;
	}
	dest[a + i] = '\0';
	return (dest);
}