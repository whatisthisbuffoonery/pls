unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	i = 0;
	a = 0;
	b = 0;
	while (dest[a])
		a ++;
	while (src[b])
		b ++;
	if (a >= size)
		return (size + b);
	while (src[i] && size > a + i + 1)
	{
		dest[a + i] = src[i];
		i ++;
	}
	dest[a + i] = '\0';
	return (a + b);
}