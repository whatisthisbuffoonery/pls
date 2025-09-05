#include <unistd.h>

extern char *a;

int	main(void)
{
	int i = 0;
	while (a[i])
		write(1, &a[i++], 1);
	write(1, "\n", 1);
}
