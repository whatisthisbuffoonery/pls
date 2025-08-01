char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[a])
		a ++;
	while (src[i])
	{
		dest[a + i] = src[i];
		i ++;
	}
	dest[a + i] = '\0';
	return (dest);
}