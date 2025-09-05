#include <stdio.h>

static int a; //like global, but only visible to this file
			  //different meaning to other static below:

void counter(void)
{
	static int	count;  // This is initialized one time, 0 by default

	printf("This has been called %d time(s)\n", ++count);
}

int main(void)
{
	(void) a;
	counter();  // "This has been called 1 time(s)"
	counter();  // "This has been called 2 time(s)"
	counter();  // "This has been called 3 time(s)"
	counter();  // "This has been called 4 time(s)"
}
