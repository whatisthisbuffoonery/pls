#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	putstr(int fd, char *a)
{
	int i = 0;

	while (a[i++]);
	i --;			//needs to be there, regardless of ++i or i++
	write(fd, a, i);
}

int	main(int c, char **v)
{
	int fd = -1;
	if (c != 2 || !v[1][0] || v[1][1])
	{
		write(1, "one single char arg pls\n", 24);
		return (1);
	}

	fd = open("print.h", O_WRONLY | O_TRUNC | O_CREAT, 0644);
	putstr(fd, "#ifndef PRINT_H\n");
	putstr(fd, "# define PRINT_H\n");
	putstr(fd, "\n#define MODE \'");
	putstr(fd, &v[1][0]);
	putstr(fd, "\'\n");
	putstr(fd, "#endif");
	close(fd);

	fd = open("Makefile", O_WRONLY | O_TRUNC | O_CREAT, 0644);
	putstr(fd, "all:\n\tclang -Wall -Wextra -Werror print.c -o b.out");		//can you believe this used to output another a.out
	close(fd);

	/*
	 * how about no.
	fd = open("print.c", O_WRONLY | O_TRUNC | O_CREATE, 0644);
	putstr(fd, "#include <unistd.h>\n");
	putstr(fd, "#include \"print.h\"\n\n");
	putstr(fd, "
	*/

	int ret = system("make");
	if (ret != -1)
		system("./b.out");
	system("rm b.out");
}
