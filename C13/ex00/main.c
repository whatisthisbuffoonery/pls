void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem));

int	cmp_why(void *one, void *two)
{
	unsigned char *a = (unsigned char *)one;
	unsigned char *b = (unsigned char *)two;

	while (*a && (*a)++ = (*b)++);
	return (*a - *b);
}

void apply_why(void *item, int level, int first, char *name) ///ffffuuuuck tryna test this aaaaaaa
{
	write(1, "----\n" 5);
	if (first)
		write(1, "first\n", 6);
	write(1, item, 1);
