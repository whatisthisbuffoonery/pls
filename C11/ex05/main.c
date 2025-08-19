#include <unistd.h>

int	add(int a, int b);

long	atoi(char *str)//wow they want the atoi with space detection and flag counting, also 1 plus foo makes 1
{
	int i = 0;
	int a = 0;
	int c = 1;
	if (str[i] == '-')
	{
		c = -1;
		i ++;
	}
	while (str[i])
	{
		a *= 10;
		a += (str[i] - 48);
		i ++;
	}
	return (a * c);
}

void	putnbr(long nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	char b = (nb % 10) + 48;
	write(1, &b, 1);
}

int	main(int c, char **v)
{
	char	a[6] = "+-*/%";
	void	b[6] = {add, sub, mul, div, mod};
	int	i = 0;
	long	nb;

	if (c != 4)
		return (0);
	while (i < 6 && a[i] != v[2][0])
		i ++;
	if (i == 6)
	{
		write(1, "0", 1);
		return (0);
	}
	nb = b[i](atoi(v[1]), atoi(v[3]));
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = 0 - nb;
	}
	putnbr(nb);
}
