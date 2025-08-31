void	print_bits(unsigned char octet)
{
	int	i = 0;
	while (i < 8)
	{
		if (octet & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet >> 1;
		i ++;
	}
}
