#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

//using .param to organise shit and go around making a named 'stuff':
//not me squeezing 3 struct inits into spaghetti

typedef struct	eh
{
	int			weight;
	char		*colour;
	char		initial;
}				stuff;

typedef struct	yeet
{
	char		*sound;
	char		*owner;					//just a pointer, technically works
	int			number_of_legs;
}				extend;

typedef struct	thing
{
	int			id;
	stuff		detail;
	extend		recog;
	char		type[];		//<------------writeable array. MAKE SURE ITS THE LAST FIELD
}				animal;

typedef struct
{
	int			a:1;
	int			b:2;
	int			c:3;
	int			d:4;
}				adjacent_bitfield;//saves space, and the mem locations are next to each other

typedef struct
{
	int			a:1;
	int			b:1;
	int			:0;
	int			c:1;
	int			d:1;
}				separated_bitfield;//(a,b) and (c,d) are now padded to take an int each 

typedef struct
{
	int			a:1;
	int			b:1;
	int			:24;
	int			c:1;
	int			d:1;
}				dummy_bitfield;//(a,b) and (c,d) now padded by 24 bits in between



typedef struct
{
	int			a:1;
	int			b;
	int			c:1;
	int			d;
}				pointless_non_adjacent_bitfield;//a and c still take a whole int each after padding

typedef struct
{
	int			a:1;
	int			b:1;
	int			c;
	int			d;
}				partial_bitfield;//a and b share the space of one int

void			init_arr(char dst[], char *src)
{
	int i = -1;
	while (src[++i])
		dst[i] = src[i];
}

void			ft_putnbr(size_t size)
{
	if (size > 9)
		ft_putnbr(size / 10);
	char a = (size % 10) + 48;
	write(1, &a, 1);
}

animal			why(void)		//a func that returns a whole struct
{
	animal dog = {
		.id = 1,
		.detail.initial = 'd',
		.detail.weight = 10,
		.detail.colour = "yellow",
		.recog = {
			.sound = "woof",
			.owner = "john",
			.number_of_legs = 4
		}
	};
	return (dog);
}

int				main(void)
{
	animal dog = why();
	init_arr(dog.type, "dog");//this goes outside

	write(1, "size of stuff: ", 15);
	ft_putnbr(sizeof(char *) + sizeof(int));
	write(1, "\nsize of padded stuff: ", 23);
	ft_putnbr(sizeof(dog.detail));
	write(1, "\noffset of each item:\n", 22);
	write(1, "stuff.colour: +", 15);
	ft_putnbr(offsetof(stuff, colour));			//different name. shocker. offset starts at 0
	write(1, "\nstuff.weight: +", 16);
	ft_putnbr(offsetof(stuff, weight));
	write(1, "\nstuff.initial: +", 17);
	ft_putnbr(offsetof(stuff, initial));
	write(1, "\n", 1);

	(void) dog;
}
