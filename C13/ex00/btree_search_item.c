void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (cmpf(data_ref, root->item) == 0)
			return (root->item);
		if (cmpf(data_ref, root->item) < 0)
			return (btree_search_item(root->left, data_ref, cmpf));
		if (cmpf(data_ref, root->item) > 0)
			return (btree_search_item(root->right, data_ref, cmpf));
	}
	return (0);
}
