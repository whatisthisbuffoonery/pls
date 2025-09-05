char	*a = malloc(100);
char	*b = realloc(NULL, 100);//same as above
char	*c = calloc(100, sizeof(char));

//realloc normally takes a malloc *p for first arg, this realloc just assigns a fresh one
//realloc also returns the same input *p half the time, and a different *p the other half
//realloc can also shrink a buffer, just tweak the size
//
//also also, aligned alloc is a thing go ask beej
