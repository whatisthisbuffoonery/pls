#include <unistd.h>

enum huh//enums are glorified bools, they also only use int
{
	a,//default 1
	b,//default a + 1
	c//default b + 1, comma in the back is optional
};

enum who//there is default typesafety in this thing, no reusing a,b,c, no converting one to another
{
	d,
	e = 7,
	f
};

int	main(void)
{
	enum huh what = c;
	char b = what + 48;

	write(1, &b, 1);
	write(1, "\n", 1);

	enum who why = f;
	b = why + 48;

	write(1, &b, 1);
	write(1, "\n", 1);
}
