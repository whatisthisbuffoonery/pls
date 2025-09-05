void	*memset(void *ptr, int value, size_t num)
{
	unsigned char	*a = (unsigned char *)ptr;
	unsigned char	val = (unsigned char)value;
	size_t	i = 0;
	while (i < num)
		a[i++] = val;
	return (ptr);
}
