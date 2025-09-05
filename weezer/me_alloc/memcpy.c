void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *a = (unsigned char *)src;
	unsigned char *b = (unsigned char *)dest;

	size_t i = 0;
	while (i < n)
		b[i] = a[i++];
	return (b);
}
