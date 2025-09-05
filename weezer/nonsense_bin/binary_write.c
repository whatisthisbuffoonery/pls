#include <fcntl.h>
#include <unistd.h>


int	ft_strlen(char *a)
{
	int i = 0;
	while (a[i])
		i ++;
	return (i);
}


void	ft_putnbr(int fd, char *v, int len)
{
	char a = 0;
	int i = 0;
	while (i < len)
	{
		a *= 10;
		a += v[i] - 48;
		i ++;
	}

	write(fd, &a, 1);
}

int	main(int c, char **v)
{
	int i = 0;
	int fd = 1;
	if (c > 1)
		fd = open("awa.bin", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	while (++i < c)
		ft_putnbr(fd, v[i], ft_strlen(v[i]));
}

// FILE *file = fopen("file.txt", "wb"); // <<more portable version, stdio.h, use fwrite
