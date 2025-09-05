#include <unistd.h>
#include <fcntl.h>

int main(int c, char **v)
{
	int fd;
	int i = 0;
	char buf[1024];
	if (c != 2)
	{
		write(1, "filename pls", 25);
		return (1);
	}
	fd = open(v[1], O_RDONLY);
	if (fd < 0)
		return (1);
	read(fd, buf, 1024);

	while(buf[i])
	{
		write(1, &buf[i], 1);
		i ++;
	}
}
