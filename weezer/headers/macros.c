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

//return values for __has_embed()
//__STDC_EMBED_NOT_FOUND__	//file aint there
//__STDC_EMBED_FOUND__		//file found
//__STDC_EMBED_EMPTY__		//empty file found
//
//fuck knows what int values those are. beej doesnt know.

//check for random embed params from tom, harry, and dick:
#if __has_embed(__FILE__ common_prefix::macro(data))
    printf("common_prefix::macro(data) is supported!");
#else
    printf("common_prefix::macro(data) is NOT supported!");
#endif

#pragma deez nuts //very prone to third party additions
//standard pragma stuff:
#pragma STDC x toggle
//replace x with:
FP_CONTRACT	Allow floating point expressions to be contracted into a single operation to avoid rounding errors that might occur from multiple operations.
FENV_ACCESS	Set to ON if you plan to access the floating point status flags. If OFF, the compiler might perform optimizations that cause the values in the flags to be inconsistent or invalid.
CX_LIMITED_RANGE	Set to ON to allow the compiler to skip overflow checks when performing complex arithmetic. Defaults to OFF.
//replace toggle with:
ON
OFF
DEFAULT
//notice all of those are for math peeps

//to tell # indents to go away
//the two lines are equivalent:
#pragma "Unnecessary" quotes
_Pragma("\"Unnecessary\" quotes")

//this overwrites __LINE__ and __FILE__ (why the fuck)
#line 420 "some_name"

//empty '#'s are a thing. idfk.
#
