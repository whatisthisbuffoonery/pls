#include <unistd.h>
#include <fcntl.h>

void	kant_read(int fd, char buf[1024], ssize_t size)
{
	int	b_read;
	b_read = read(fd, buf, size);
	while (b_read > 0)
	{
		write(1, buf, b_read);
		b_read = read(fd, buf, size);
	}
}

int	main(int c, char **v)
{
	int	fd;
	int	i = 1;
	char	buf[1024];
	if (c < 2)
		write(1, "usage: ./a.out filename\n", 24);
	if (c > 2)
		write(1, "one file at a time please\n", 26); //do i give a fu
	if (c == 2) //while (i < c)	<- what I would do otherwise
	{
		fd = open(v[i], O_RDONLY);
		if (fd < 0)
			write(1, "cannot read file\n", 17);
		kant_read(fd, buf, 1024);
		close(fd);
		i ++;
	}
}
