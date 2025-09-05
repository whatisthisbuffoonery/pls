char **p;						//no const
p++;     // OK!
(*p)++;  // OK!

char **const p;					//top level p is const
p++;     // Error!
(*p)++;  // OK!

char *const *p;					//middle level p is const
p++;     // OK!
(*p)++;  // Error!

char *const *const p;			//both pointer levels are const
p++;     // Error!
(*p)++;  // Error!

const char *const *const p;		//actual char data is also const now
(**p)++;  // Error!
