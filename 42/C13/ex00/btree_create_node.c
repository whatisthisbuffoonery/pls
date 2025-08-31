t_btree	*btree_create_node(void *item)
{
	t_btree *a;

	a = malloc(sizeof(t_btree));
	a->item = item;
	a->left = 0;
	a->right = 0;
	return (a);
}
