#define trig_area(x, y) (x * y / 2) //reluctant to get floats/doubles in here

#define add(x, y, ...) ((x + y), __VA_ARGS__) //extra args are left out anyway. Don't.

#define sqrt(x) // how.

#define STR(x) #x//takes whatever and wraps it in double quotes
#define PRINT_INT_VAR(x) printf("int var %s has value %d", #x, x)

#define STR_CAT(x, y) x ## y //only int, float, double allowed.

#define ASSERT_M(x) do { if (!x) { printf("error: call %s, file %s, line %d/n", #x, __FILE__, __LINE__); } } while(0)
//line num is a num, go figure //asserts are glorified 

#define MULTI_LINE(x) \
do \
{ \
	if (x) \
	{ \
		printf("this is"); \
		printf("multi line"); \
	} \
} while (0);

//quotes not actually needed:
#ifdef BOMB_OUT
# error "you asked for this bomb"
#endif

//inputs single bytes and puts them as separate items
//this would be used for importing small images instead
//this checks <foo.bin> when "foo.bin" fails.
int a[] = {
#embed "foo.bin"
};

//make sure only one byte is there to be passed in:
//if file is empty, 999 sentinel says file was empty --> return (999);
//of course the limit is clamped at 255
return
#embed "something.dat" if_empty(999)

//limit() says how many bytes to read.
//No, we do not have bigger numbers to make full ints
//prefix() and suffix() can take whatever
char a[] = {
#embed "/dev/foo.dat" limit(3) prefix("something ",) suffix(," something")
	0
};
//the sentinel 0 is there to not bomb an empty foo.dat // your code should expect an extra 0 element in the back
//sentinel can be whatever
//prefix and suffix are skipped with an empty foo.dat

//an alternative to the above
#if __has_embed("foo.dat")
...
#elif __has_embed("backup.dat")
...
#else
...
#endif

















