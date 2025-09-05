#include <unistd.h>
#include "print.h"

//look up:
/*
#if defined(MODE_0)
    a = 48;
#elif defined(MODE_1)
    a = 49;
	...
*/
int	main(void)
{

	write(1, "mode selected: ", 15);
	if (MODE > 47 && MODE < 58)
	{
		char a = MODE;
		write(1, &a, 1);
	}
	else
		write(1, "non number", 10);
	write(1, "\n", 1);
}

