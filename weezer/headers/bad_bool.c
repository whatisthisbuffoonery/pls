

//NASA hates macro spam
//comment lines look greenish by comparison
//this program triggers both conditions, pls dont


#include <stdio.h>
#include <unistd.h>

int main(int c, char **v)		//c does not compute whitespace. observe:
{
	(void) v;

	if (c > 1)//----------------------------\
		#define EXTRA_HAPPY//				|
//											|	goes down...
//											|
#ifdef	EXTRA_HAPPY//						|
{//<<<--------------------------------------/	there. macros did fuck all. make EXTRA_HAPPY 0 or 1 for better use
	printf("I'm extra happy!\n");
	return (0);
}
#endif

	printf("OK!\n");
}
