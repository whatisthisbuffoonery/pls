#include <unistd.h>

//count the number of scopes

int	i = 1;

int	main(void)
{
	(void) i;
	char *i = "wtf\0";
	for (int i = 0; i < 5; i++)//semicolons
	{
		char i = 'a';
		write(1, &i, 1);
	}
	write(1, "\n", 1);
	write(1, i, 3);
	write(1, "\n", 1);
}

//answer: 4
