#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *a = 0;
	t_list *b = 0;
	t_list *curr = 0;
	if (*begin_list)
	{
		a = (*begin_list)->next;
		curr = *begin_list;
	}
	while (curr && !cmp(curr->data, data_ref))
	{
		free_fct(curr);
		curr = a;
		if (a)
			a = a->next;
	}
	*begin_list = curr;
	while (a)
	{
		if (!cmp(a->data, data_ref))
			b = a;
		if (!b)
			curr = a;
		a = a->next;
		if (b)
		{
			free_fct(b);
			b = 0;
			(curr)->next = a;
		}
	}
}
