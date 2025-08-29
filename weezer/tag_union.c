#include <unistd.h>




//dynamic typing wwOOOOOOOooOoOooOOOOO




typedef enum//what did I say about bools
{
	is_int,//defaults to 0
	is_char,//defaults to 1
	is_long//defaults to 2
}	t_check;

typedef struct
{
	t_check type;
	union	{int i; char c; long l;}	data;//semicolons for unions, treat them as structs
}	t_any;

int	main(void)
{
	t_any a;//simple way
	a.type = is_int;//optional, this is for if conditions to check
	t_any b;
	b.type = is_char;

	a.data.i = 5;
	b.data.c = a.data.i + 48;

	write(1, &b.data.c, 1);//5
	write(1, "\n", 1);

	a.data.c = 49;//overwrite, a.data.i is now 49
	a.data.i += 7;//teehee
	write(1, &a.data.c, 1);//8
	write(1, "\n", 1);

	t_any f = {is_int, .data.i = 50};//actual declaration
	write(1, &f.data.c, 1);//2
	write(1, "\n", 1);
}
