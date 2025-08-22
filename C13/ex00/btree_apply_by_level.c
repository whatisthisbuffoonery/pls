#include "ft_btree.h"
#include <stdlib.h>

void	make_queue(t_node **b, t_btree *root, int level, int *max)
{
	if (root)
	{
		make_queue(b, root->left, level + 1, max);
		make_queue(b, root->right, level + 1, max);
		if (level > *max)
			*max = level;
		(*b)->next = malloc(sizeof(t_node));
		(*b)->item = root->item;
		(*b)->level = level;
		*b = (*b)->next;
	}
}

void	sort_queue(t_node *b, int max)
{
	int *i = malloc((max + 1) * sizeof(int));
	int k = -1;
	while (++k < max)
		i[k] = 1;
	while (b)
	{
		if (i[b->level])
		{
			b->first = 1;
			i[b->level] = 0;
		}
		else
			b->first = 0;
		b = b->next;
	}
}
/*
t_node	*muh_queue(int level, int first, void *item)

void	real_queue(t_btree *root, int level) //make this a func that makes short lists based on children of each node
					     //make a separate func that keeps track of first and calls this
{
	int i = 0;
	if (root)
	{
		muh_queue(root, 1, level);
		if (!root->left)
			i = 1;
		muh
*/
void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_node	a;
	a.next = 0;
	t_node *b = &a;
	t_node *c = 0;
	int max = 0;

	make_queue(&b, root, 0, &max);
	free(b);
	b = a.next;
	sort_queue(b, max);

	while (b)
	{
		applyf(b->item, b->level, b->first);
		b = b->next;
	}
	b = a.next;
	while (b)
	{
		c = b->next;
		free(b);
		b = c;
	}
}
