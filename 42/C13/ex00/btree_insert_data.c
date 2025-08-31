t_btree	*btree_create_node(void *item);

char	*strcat(char *dest, char *in)
{
	int i = 0;
	int k = 0;
	while (dest[i++]);
	while (in[k++]);
	char *a = malloc((i + k + 1) * sizeof(char));
	i = 0;
	k = 0;
	while (dest[i])
		a[i] = dest[i++];
	while (in[k])
		a[i++] = in[k++];
	a[i] = '\0';
	return (a);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *), char *suf)
{
	
	if (*root)
	{
		if (cmpf(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf, strcat(suf, "L"));
		else
			btree_insert_data(&(*root)->right, item, cmpf, strcat(suf, "R"));
	}
	if (!*root)
	{
		char name[2];
		int i = 0;
		if (level > 10)
			name[i++] = (level / 10) + 48;
		name[i] = (level % 10) + 48;
		*root = btree_create_node(item);
		(*root)->name = strcat(name, suf);
	}		
}
